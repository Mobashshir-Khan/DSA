// 1 1 1 1
//   2 2 2
//     3 3
//       4

#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=row; j++)
        {
            if (j>=i)
            {
                cout<<i<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}