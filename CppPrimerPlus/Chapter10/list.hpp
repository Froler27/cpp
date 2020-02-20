#ifndef LIST_HPP_
#define LIST_HPP_

namespace ListNS
{
    typedef int Item;

    class List
    {
    private:
        static const int MAX_SIZE = 10;
        Item items[MAX_SIZE];
        int size;
    public:
        List();
        bool addItem(Item item);
        bool isEmpty();
        bool isFull();
        void visit(void (*pf)(Item &));
    };
}

#endif