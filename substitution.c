#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

bool duplicate(string s);               // To check if there are duplicate elements in the given key
void encrypt(string ptext, string key); // Encrypts given plain text into cipher text and prints cipher text
int main(int argc, string argv[])
{
    string ptext, key;
    if (argc != 2) // if user enters other than two command line arguements
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (strlen(argv[1]) != 26) // if user enters less than or more than 26 characters
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }

    else if (duplicate(argv[1])) // if user enters a key with one or more duplicate characters
    {
        printf("Key must not contain repeated characters\n");
        return 1;
    }
    key = argv[1];
    ptext = get_string("Ptext: "); // Getting plain text from user
    encrypt(ptext, key);
    return 0;
}
bool duplicate(string s)
{
    for (int i = 0; i < 26; i++)
    {
        if (isalpha(s[i]) == 0) // if any non-alphabetic character is entered in key
        {
            return true;
            break;
        }
        for (int j = i + 1; j < 26; j++)
        {
            if (s[i] == s[j])
            {
                return true;
                break;
            }
        }
    }
    return false;
}
void encrypt(string ptext, string key)
{
    int upp[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int low[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int len = strlen(ptext);
    printf("ciphertext: ");
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (isupper(ptext[i])) // for uppercase characters
            {
                if (ptext[i] == upp[j])
                {
                    printf("%c", toupper(key[j]));
                }
            }
            else if (islower(ptext[i])) // for lower case characters
            {
                if (ptext[i] == low[j])
                {
                    printf("%c", tolower(key[j]));
                }
            }
        }
        if (!isalpha(ptext[i])) // non alphabetic characters in plain text remain same
        {
            printf("%c", ptext[i]);
        }
    }
    printf("\n"); // line break after cipher text
}