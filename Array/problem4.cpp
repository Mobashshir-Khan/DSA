// Reverse an array

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the number of elements of the array: ";
    cin>>size;

    int arr[size];
    for (int i=0; i<size; i++)
    {
        cout<<"Enter "<<(i+1)<<" element: ";
        cin>>arr[i];
    }

    cout<<"The array before reversing: "<<endl;
    for (int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for (int i=0; i<=(size/2); i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }

    cout<<"The array after reversing: "<<endl;
    for (int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}