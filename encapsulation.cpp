#include <iostream>

class Banking
{
private:
    double balance;

public:
    Banking(double bal) : balance(bal)
    {
    }
    int getBalance()
    {
        return balance;
    }
    void deposit(int amt)
    {
        if (amt > 0)
        {
            balance = balance + amt;
            std::cout << "Deposit Amount is:" << amt << std::endl;
        }
    }
    void withdraw(int amt)
    {
        if (amt > 0 && amt < balance)
        {
            balance = balance - amt;
            std::cout << "Withdrawal Amount is:" << amt << std::endl;
        }
    }
};
int main()
{
    Banking myBank(100);
    myBank.deposit(50);
    myBank.withdraw(25);

    std::cout << "Account balance is:" << myBank.getBalance() << std::endl;
}