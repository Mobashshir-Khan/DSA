// Sum of n numbers by function

#include<iostream>
using namespace std;

void sum(int n)
{
    int add = 0;
    for (int i=1; i<=n; i++)
    {
        add += i;
    }
    cout<<"The sum of first "<<n<<" numbers is "<<add;

}
int main()
{
    int num;
    cout<<"Enter the last number: ";
    cin>>num;

    sum(num);
}