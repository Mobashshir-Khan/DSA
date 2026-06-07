// Factorial

#include<iostream>
using namespace std;
int main()
{
    int num, count=1;

    cout<<"Enter the number: ";
    cin>>num;

    for(int i=2;i<=num;i++)
    {
        count = count*i;
    }

    cout<<"The factorial of "<<num<<" is "<<count;
    return 0;
}