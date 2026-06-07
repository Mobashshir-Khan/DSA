//divisible by 2

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if ((num&1) == 0)
    {
        cout<<"divisible";
    }
    else
    {
        cout<<"not divisible";
    }
}