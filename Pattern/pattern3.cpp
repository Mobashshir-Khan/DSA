// A B C D
// A B C D
// A B C D
// A B C D

#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    for (int i=1; i<=row; i++)
    {
        int num = 65;
        for (int j=1; j<=row; j++)
        {
            cout<<char(num)<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}