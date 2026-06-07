// Maximum of 2 numbers

#include<iostream>
using namespace std;
int main()
{
    int first,second;

    cout<<"Enter the first number: ";
    cin>>first;
    cout<<"Enter the second number: ";
    cin>>second;

    if(first > second)
    {
        cout<<first<<" is maximum number";
    }
    else
    {
        cout<<second<<" is maximum number";
    }
    return 0;
}