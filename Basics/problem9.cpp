// Combination

#include<iostream>
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n,r,comb;
    cout<<"Calculation for combination (nCr) "<<endl;
    cout<<"Enter the n value: ";
    cin>>n;
    cout<<"Enter the r value: ";
    cin>>r;

    comb = (fact(n))/(fact(r)*fact(n-r));
    cout<<"The combination of "<<n<<"C"<<r<<" is "<<comb;

}