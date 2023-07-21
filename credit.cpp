#include <iostream> //Including libraries
using namespace std;
int card_validity(long long card);
int sumfirst(long long card);
int sumsecond(long long card);
void cardBrand(long long card);
int main(void)
{
    long long card;
    do
    {
        cout << "Enter your credit card number: ";
        cin >> card;

    } while (card < 0); // Card number cannot be negative
    if (card_validity(card) == 1)
    {
        cardBrand(card);
    }
    else
    {
        cout << "INVALID CARD NUMBER" << endl;
    }
}
int card_validity(long long card) // Returns true if card is valid
{
    int sum1 = sumfirst(card), sum2 = sumsecond(card);
    int totalsum = sum1 + sum2;
    return (totalsum % 10 == 0);
}
int sumfirst(long long card) // To find the sum of every other digit which is multiplied by 2
{
    int sum1 = 0;
    while (card > 0)
    {
        card = card / 10;
        int digit = ((card % 10) * 2);
        if (digit > 9)
        {
            digit = (digit % 10) + (digit / 10);
        }
        sum1 += digit;
        card /= 10;
    }
    return sum1;
}
int sumsecond(long long card) // To find the sum of digits which were not multiplied by 2
{
    int sum2 = 0;
    while (card > 0)
    {
        sum2 += (card % 10);
        card /= 100;
    }
    return sum2;
}
void cardBrand(long long n) // To determmine the brand of the credit card
{
    if (((int)(n / 1e13) == 34) || ((int)(n / 1e13) == 37)) // checking if first two digits are 34 or 37
    {
        cout << "AMEX\n";
    }
    else if ((int)(n / 1e14) >= 51 && (int)(n / 1e14) < 56) // checking if first two digits are 51/52/53/54/55
    {
        cout << "MASTERCARD\n";
    }
    else if (((int)(n / 1e12) == 4) || ((int)(n / 1e15) == 4)) // checking if first digit is 4
    {
        cout << "VISA\n";
    }
    else
    {
        cout << "INVALID\n";
    }
}