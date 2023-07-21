#include <iostream>
using namespace std;
class shop
{
    int itemId[10];
    int itemPrice[10];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }
    void setprice()
    {
        int num;
        cout << "Enter Number of items ";
        cin >> num;
        while (counter < num)
        {
            cout << "Enter the item id and price of item no " << counter + 1 << endl;
            cin >> itemId[counter] >> itemPrice[counter];
            counter++;
        }
    }
    void displayPrice()
    {
        for (int i = 0; i < counter; i++)
        {
            cout << "The price of item with id " << itemId[i] << " is " << itemPrice[i] << endl;
        }
    }
};
int main()
{
    shop toy;
    toy.initcounter();
    toy.setprice();
    toy.displayPrice();
    return 0;
}