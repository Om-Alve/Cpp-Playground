#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read();
    void bin_check();
    void compliment();
    void display();
};
void binary ::read()
{
    cout << "Enter a Binary Number- ";
    cin >> s;
}
void binary::bin_check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid Input";
            exit(0);
        }
    }
}
void binary::compliment()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << "The compliment of ";
    display();
}
void binary::display()
{
    cout << "given number is " << s << endl;
}
int main()
{
    binary b;
    b.read();
    b.bin_check();
    b.display();
    b.compliment();
    return 0;
}