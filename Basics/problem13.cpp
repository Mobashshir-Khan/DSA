// Bitwise AND OR EX-OR Left shift and Right shift
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Entter the two numbers: ";
    cin>>a>>b;
    cout<<"Bitwise AND is: "<<(a&b)<<endl;
    cout<<"Bitwise OR is: "<<(a|b)<<endl;
    cout<<"Bitwise EX-OR is: "<<(a^b)<<endl; 

    cout<<"Left shift a<<b"<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"Left shift "<<a<<"<<"<<b<<": "<<(a<<b)<<endl;

    cout<<"Right shift a<<b"<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"Right shift "<<a<<">>"<<b<<": "<<(a>>b);

}