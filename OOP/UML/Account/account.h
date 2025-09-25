#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
private:
    int accountNumber;
    double balance;
public:
    Account(int accountNumber, double balance);
    void credit(double amount);
    void debit(double amount);
    int getAccountNumber();
    double getBalance();
    void setBalance(double balance);
    void setAccountNumber(int accountNumber);
    void display();
};
#endif // ACCOUNT_H