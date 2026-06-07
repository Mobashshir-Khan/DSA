//       1
//     1 2 1
//   1 2 3 2 1 
// 1 2 3 4 3 2 1

#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    for (int i=1; i<=row; i++)
    {
        int num = 1;
        for (int j=1; j<=row; j++)
        {
            if (i+j >= row+1)
            {
                cout<<num<<" ";
                num++;
            }
            else
            {
                cout<<"  ";
            }
        }
        
        for (int j=1; j<=row; j++)
        {
            if (i > j)
            {
                cout<<(i-j)<<" ";
            }
        }
        
        cout<<endl;
    }
}