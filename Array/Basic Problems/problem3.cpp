// Searching element in an array

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the number of elements in the array: ";
    cin>>size;

    int arr[size];
    for (int i=0; i<size; i++)
    {
        cout<<"Enter "<<(i+1)<<" element: ";
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the element to be searched: ";
    cin>>target;

    int count = 0;
    for (int i=0; i<size; i++)
    {
        if (arr[i] == target)
        {
            cout<<i<<" ";
            count++;
        }
    }

    if (count == 0)
    {
        cout<<"The element is not there in the array!!!";
    }
    else
    {
        cout<<endl<<"The element is present in the above index/indices";
    }
    return 0;
}