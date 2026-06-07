// Simple interest

#include<iostream>
using namespace std;
int main()
{
    int p,r,t;

    cout<<"Enter the principal amount: ";
    cin>>p;
    cout<<"Enter the rate of interest: ";
    cin>>r;
    cout<<"Enter the time period: ";
    cin>>t;

    int si = (p*r*t)/100;
    cout<<"Simple interest = "<<si;
    return 0;
}