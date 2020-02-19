#ifndef ACCOUNT_HPP_
#define ACCOUNT_HPP_
#include <string>

class Account
{
private:
    std::string name_;
    std::string ID_;
    double balance_;

public:
    Account();
    Account(const std::string name, const std::string ID, double balance = 0.0);
    ~Account();

    void show();
    void deposit(double money);
    void fetch(double money);
};

#endif