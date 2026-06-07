// Decimal to binary

#include<iostream>
using namespace std;
int main()
{
    int num, bin = 0, rem, pow = 1;
    cout<<"Enter the number: ";
    cin>>num;
    int minus = num;

    if (num<0)
    {
        num = num*(-1);
    }

    while (num > 0)
    {
        rem = num % 2;
        num /= 2;
        bin += rem*pow;
        pow *= 10;
    }
    
    if (minus<0)
    {
        bin = bin + (1*pow);
    }
    cout<<"The binary equivalent of the number is "<<bin;
    return 0;
}