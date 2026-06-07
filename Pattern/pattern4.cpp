// 1 2 3 
// 4 5 6 
// 7 8 9 

#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    int num = 1;
    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=row; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}