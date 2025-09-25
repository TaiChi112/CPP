#include <iostream>

using namespace std;
class User
{
    int userId;
    string name;
    double money;

public:
    User(int uid = 0, string n = "Undefine", double mn = 0.0) : userId(uid), name(n), money(mn) {}
    friend ostream &operator<<(ostream &out, const User &u)
    {
        out << "User Id: " << u.userId << endl;
        out << "Name: " << u.name << endl;
        out << "Money: " << u.money << endl;
        return out;
    }
};
class Account
{
    int accountId;
    double balance;
    User userId;

public:
    Account(int aid = 0, double b = 0.0, User uid = User()) : accountId(aid), balance(b), userId(uid) {}
    friend ostream &operator<<(ostream &out, const Account &a)
    {
        out << "Account Id: " << a.accountId << endl;
        out << "Balance: " << a.balance << endl;
        out << "User Id: " << a.userId << endl;
        return out;
    }
};
int main()
{
    User u1(1, "John", 112.112), u2;
    cout << u1 << endl;
    cout << u2 << endl;
    Account a1(1, 1000.0, u1);
    cout << a1 << endl;
    return 0;
}