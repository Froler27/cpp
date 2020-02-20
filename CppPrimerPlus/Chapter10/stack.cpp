#include "stack.hpp"
Stack::Stack()
{
    top = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Customer & customer)
{
    if (top < MAX)
    {
        customers[top++] = customer;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Customer & customer)
{
    if (top > 0)
    {
        customer = customers[--top];
        return true;
    }
    else
        return false;
}
