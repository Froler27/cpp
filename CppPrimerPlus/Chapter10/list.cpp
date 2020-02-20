#include "list.hpp"
#include <iostream>

namespace ListNS
{
    List::List()
    {
        size = 0;
    }

    bool List::addItem(Item item)
    {
        if (isFull())
        {
            std::cout << "List is full!" << std::endl;
            return false;
        }
        else
        {
            items[size++] = item;
            return true;
        }
    }

    bool List::isEmpty()
    {
        return size == 0;
    }
    
    bool List::isFull()
    {
        return size == MAX_SIZE;
    }
    
    void List::visit(void (*pf)(Item &))
    {
        for (int i = 0; i < size; i++)
        {
            pf(items[i]);
        }
    }
}