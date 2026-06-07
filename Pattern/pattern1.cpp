// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 

#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    for(int i=1; i<=row; i++) 
    {
        int num = 1;
        for(int j=1; j<=row; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    return 0;
}