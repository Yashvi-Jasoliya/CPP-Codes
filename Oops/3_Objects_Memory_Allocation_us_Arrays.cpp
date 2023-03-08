#include <iostream>
#include <string>
using namespace std;

class shop
{
    int itemId[80];
    int itemPrice[80];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter Id of your item no. " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The item Id of item is :- " << itemId[i] << " and its price is :- " << itemPrice[i] << endl;
    }
}

int main()
{
    shop Store;
    Store.initCounter()
    Store.setPrice();
    Store.setPrice();
    Store.setPrice();
    Store.setPrice();
    Store.setPrice();
    Store.displayPrice();
    return 0;
}
