#ifndef STACK_HPP_
#define STACK_HPP_

const int NAME_MAX = 35;

struct Customer {
    char fullname [NAME_MAX];
    double payment;
};

class Stack
{
private:
    enum {MAX = 10};
    Customer customers[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Customer & customer);
    bool pop (Customer & customer);
};

#endif