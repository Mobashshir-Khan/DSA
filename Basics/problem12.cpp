// Binary to decimal

#include<iostream>
using namespace std;
int main()
{
    int num, rem, pow = 1 , dec = 0;
    cout<<"Enter the number in binary: ";
    cin>>num;
    while (num > 0)
    {
        rem = num % 10;
        num /= 10;
        dec += rem * pow;
        pow *= 2;
    }
    cout<<"The binary equivalent of the number is: "<<dec;
    return 0;
}