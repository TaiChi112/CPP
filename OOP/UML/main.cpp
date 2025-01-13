#include <iostream>

using namespace std;
struct Account;
struct User
{
    int userId;
    string name;
    Account **accounts;
    int accountCount;
    int accountCapacity;
    User(int uid = 1, string name = "") : userId(uid), name(name) {}
    User(const User &user) : userId(user.userId), name(user.name)
    {
        accounts = new Account *[user.accountCapacity];
        for (int i = 0; i < user.accountCount; i++)
        {
            accounts[i] = user.accounts[i];
        }
        accountCount = user.accountCount;
        accountCapacity = user.accountCapacity;
    }
    ~User() { delete[] accounts; }

    friend ostream &operator<<(ostream &os, const User &user)
    {
        os << "User Id: " << user.userId << " Name: " << user.name;
        return os;
    }
};

int main()
{
    User user(1, "John");
    cout << user << endl;
    return 0;
}