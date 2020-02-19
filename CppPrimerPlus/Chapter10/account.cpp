#include "account.hpp"
#include <iostream>

Account::Account()
{
    std::cout << "--- Default constructor called\n";
    name_ = "no name";
    ID_ = "no id";
    balance_ = 0.0;
}

Account::Account(const std::string name, const std::string ID, double balance)
{
    std::cout << "--- Constructor using " << ID << " called\n";
    name_ = name;
    ID_ = ID;
    balance_ = balance; 
}

Account::~Account()
{
    std::cout << "--- " << ID_ << " has been destroyed!\n";
}

void Account::show()
{
    std::cout << "Name: " << name_
              << "\nID: " << ID_
              << "\nbalance: " << balance_
              << std::endl;
}

void Account::deposit(double money)
{
    if (money < 0)
        std::cout << "--- Failed!\n";
    else 
        {
            balance_ += money;
            std::cout << "--- Deposit $" << money << std::endl;
        }
}

void Account::fetch(double money)
{
    if (money < 0)
        std::cout << "--- Failed!\n";
    else 
        {
            balance_ -= money;
            std::cout << "--- Fetch $" << money << std::endl;
        }
}