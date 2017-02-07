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

int binarieToDecimal(char binarie[])//Utiliza pow(int x, int y)
//nao funciona!!!problema para saber o tamanho de 'binarie'
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
        return pow(x*x, y/2);
    }
    else
    {
        return x * pow(x, y-1);
    }
}

//returns the size of a character array using a pointer to the first element of the character array
int size(char *ptr)
{
    //variable used to access the subsequent array elements.
    int offset = 0;
    //variable that counts the number of elements in your array
    int count = 0;

    //While loop that tests whether the end of the array has been reached
    while (*(ptr + offset) != '\0')
    {
        //increment the count variable
        ++count;
        //advance to the next element of the array
        ++offset;
    }
    //return the size of the array
    return count;
}
