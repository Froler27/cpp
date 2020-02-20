#include <iostream>
#include <cctype>
#include "stack.hpp"

int main()
{
    using namespace std;
    Stack st;
    char ch;
    double sum = 0.0;
    Customer po;
    cout << "Please enter A to add a purchase orde,\n"
        << "P to Process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a': 
            cout << "Enter a customer fullname: ";
            cin.getline(po.fullname, NAME_MAX);
            cout << "Enter the payment: ";
            cin >> po.payment;
            if (st.isfull())
                cout << "stack already full\n";
            else
                st.push(po);
            break;
        case 'P':
        case 'p':
            if (st.isempty())
                cout << "stack already empty\n";
            else {
                st.pop(po);
                cout << "--- " << po.fullname << ": $"
                    << po.payment << " --- popped\n";
                sum += po.payment;
                cout << "Total money: $" << sum << endl;
            }
            break;
        }
        cout << "Please enter A to add a purchase order, \n"
            << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";

    return 0;
}