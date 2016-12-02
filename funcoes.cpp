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

int binarieToDecimal(String binarie)//Utiliza pow(int x, int y)
{
    int decimal = 0;
    for (int i = binarie.length-1; i >= 0; i--)
    {
        if (binarie[i] == '1')
        {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

int pow(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    if (y % 2 == 0)
    {
        return pow(x*x, y/2));
    }
    else
    {
        return x * pow(x, y-1)
    }
}
