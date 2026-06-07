// Swapping minimum and maximum element

#include<iostream>
using namespace std; 

int swap(int arr[], int size)
{
    int index_max = 0, index_min = 0;
    int max, min;
    max = arr[0];
    min = arr[0];

    for (int i=0; i<size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            index_max = i;
        }
        if (min > arr[i])
        {
            min = arr[i];
            index_min = i;
        }
    }

    int temp;
    temp = arr[index_max];
    arr[index_max] = arr[index_min];
    arr[index_min] = temp;

    for (int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}


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

    swap(arr, size);
}