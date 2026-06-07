// Sum of digits of a number

#include<iostream>
using namespace std;

int cal(int n)
{
    int rem, sum = 0;
    while (n > 0)
    {
        sum = sum + (n%10);
        n = n/10;
    }
    return sum;
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"The sum of numbers present in "<<num<<" is "<<cal(num);
}