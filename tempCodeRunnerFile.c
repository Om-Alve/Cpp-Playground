#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int hexToDecimal(char hex[]);
void decimalToBase(int num, int base);
void baseToDecimal(int num, int base);
void decimalToHexa(int n);

int main()
{
    while (true)
    {
        printf("Menu:\n1:Decimal to binary\n2:Binary to decimal\n3:Decimal to octal\n4:Octal to decimal\n5:Decimal to hexadecimal\n6:Hexadecimal to decimal\n7:Exit\n");
        int n;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            int num1;
            printf("Enter a number:\n");
            scanf("%d", &num1);
            decimalToBase(num1, 2);
            break;
        case 2:
            int num2;
            printf("Enter a number:\n");
            scanf("%d", &num2);
            baseToDecimal(num2, 2);
            break;
        case 3:
            int num3;
            printf("Enter a number:\n");
            scanf("%d", &num3);
            decimalToBase(num3, 8);
            break;
        case 4:
            int num4;
            printf("Enter a number:\n");
            scanf("%d", &num4);
            baseToDecimal(num4, 8);
            break;
        case 5:
            int num5;
            printf("Enter any decimal number: ");
            scanf("%d", &num5);
            decimalToHexa(num5);
            break;
        case 6:
            char hex[100];
            printf("Enter a hexadecimal number: ");
            scanf("%s", hex);
            printf("%d\n", hexToDecimal(hex));
            break;
        case 7:
            return 0;
        }
    }
    return 0;
}

int hexToDecimal(char hex[])
{
    int decimal = 0, length = strlen(hex);
    for (int i = 0; i < length; i++)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - '0') * pow(16, length - i - 1);
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f')
        {
            decimal += (hex[i] - 'a' + 10) * pow(16, length - i - 1);
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 'A' + 10) * pow(16, length - i - 1);
        }
        else
        {
            printf("Invalid hexadecimal number\n");
            return -1;
        }
    }
    return decimal;
}

void decimalToBase(int num, int base)
{
    int ans[100];
    int i = 0;
    while (num != 0)
    {
        ans[i++] = num % base;
        num /= base;
    }
    while (i--)
    {
        printf("%d", ans[i]);
    }
    printf("\n");
}

void baseToDecimal(int num, int base)
{
    int ans = 0;
    int i = 0;
    while (num != 0)
    {
        ans += (num % 10) * pow(base, i++);
        num /= 10;
    }
    printf("%d", ans);
}

void decimalToHexa(int n)
{
    int i = 1, j, temp;
    char hexan[100];
    while (n != 0)
    {
        temp = n % 16;
        // To convert integer into character
        if (temp < 10)
        {
            temp = temp + 48;
        }
        else
        {
            temp = temp + 55;
        }
        hexan[i++] = temp;
        n = n / 16;
    }
    printf("The hexadecimal number is ");
    for (j = i - 1; j > 0; j--)
        printf("%c", hexan[j]);
}
