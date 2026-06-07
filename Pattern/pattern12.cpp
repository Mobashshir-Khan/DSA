//       *
//     *   *
//   *       *
// *           *
//   *       *
//     *   *
//       *

#include <iostream>
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
            if (i+j == row+1)
            {
                cout <<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        for (int j=1; j<=row; j++)
        {
            if (i-j == 1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for (int i=1; i<row; i++)
    {
        for (int j=1; j<=row; j++)
        {
            if (j-i == 1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        for (int j=1; j<=row; j++)
        {
            if (i+j == row-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
}