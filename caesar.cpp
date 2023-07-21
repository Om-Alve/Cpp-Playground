#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

using namespace std;
bool only_digits(string s);          // Returns true if char in strings are number and Returns false if string has any other char
void encrypt(string ptext, int key); // Encrypts the given plain text into cipher text
int main(int argc, string argv[])
{
    if (argc != 2) // if user enters other than two command line arguements
    {
        cout << "Usage: ./caesar key\n";
        return 1;
    }
    else if (only_digits(argv[1]) == 0) // If user enters non-digit characters
    {
        cout << "Usage: ./caesar key\n";
        return 1;
    }
    string ptext, ctext;
    int key;
    key = stoi(argv[1]);
    cout << "plaintext: ";
    cin >> ptext;
    cout << endl;
    encrypt(ptext, key);
    return 0;
}
bool only_digits(string s)
{
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (isdigit(s[i]) == 0)
        {
            return false;
        }
    }
    return true;
}
void encrypt(string ptext, int key)
{
    int len = ptext.size();
    cout << "ciphertext:  ";
    for (int i = 0; i < len; i++)
    {
        if (isupper(ptext[i]))
        {
            cout << ((((ptext[i] - 65 + key) % 26) + 65));
        }
        else if (islower(ptext[i]))
        {
            cout << ((((ptext[i] - 97 + key) % 26) + 97));
        }
        else
        {
            cout << ptext[i];
        }
    }
    cout << endl; // line break
}