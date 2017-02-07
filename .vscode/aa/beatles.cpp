#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int mdc(int x, int y)
{
    int mdc = 1;
    int divisor = 2;
    while (divisor <= x && divisor <= y) {
        if (x % divisor == 0 && y % divisor == 0) {
            x = x/divisor;
            y = y/divisor;
            mdc *= divisor;
        }
        else if (x % divisor == 0) {
            x = x/divisor;
        }
        else if (y % divisor == 0) {
            y = y/divisor;
        }
        else {
            divisor++;
        }
    }
    return mdc;
}

int pow(int x, int y)
{
    printf("olaPow");
    if (y == 0)
    {
        return 1;
    }
    if (y % 2 == 0)
    {
        return pow(x*x, y/2);
    }
    else
    {
        return x * pow(x, y-1);
    }
}

int binarieToDecimal(char* &binarie)//Utiliza pow(int x, int y)
{
    int decimal = 0;
    for (int i = sizeof(binarie) -1; i >= 0; i--)
    {
        printf("ola");
        cout << binarie << endl;
        if (binarie[i] == '1')
        {
            printf("ola");
            decimal += pow(2, i);
        }
    }

    return decimal;
}

void printMessage(bool b, int i)
{
    if (b)
    {
        printf("Pair #%d: All you need is love!", i);
    }
    else
    {
        printf("Pair #%d: Love is not all you need!", i);
    }
}

int main()
{
    int cases;
    scanf("%d", &cases);

    string s1;
    string s2;
    for (int i = 0; i < cases; i++)
    {
        cin >> s1 >> s2;
        printf("ola");
        int decimal = 0;
        cout << s1 << "---" << s2 << endl;
        for (int i = sizeof(s1) -1; i >= 0; i--)
        {
            printf("ola");
            if (s1[i] == '1')
            {
                decimal += pow(2, i);
            }
        }
        int b = decimal;
        decimal = 0;
        for (int i = sizeof(s2) -1; i >= 0; i--)
        {
            if (s2[i] == '1')
            {
                decimal += pow(2, i);
            }
        }
        int c = decimal;
        bool a = mdc(b, c) != 1;

        printMessage(a, i);
    }
}
