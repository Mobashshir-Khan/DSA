#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    int **ptr2ptr = &ptr;

    cout<<"ptr: "<<ptr<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    cout<<"ptr2ptr: "<<ptr2ptr<<endl;
    cout<<"*ptr2ptr: "<<*ptr2ptr<<endl;
    cout<<"**ptr2ptr: "<<**ptr2ptr<<endl;
}