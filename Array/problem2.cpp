// Smallest and largest element in an array
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the number of elements of array: ";
    cin>>size;

    int arr[size];
    for (int i=0; i<size; i++)
    {
        cout<<"Enter "<<(i+1)<<" element: ";
        cin>>arr[i];
    }
    
    int smallest = arr[0];
    for (int i=0; i<size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout<<"The smallest element in the array is "<<smallest<<endl;

    int largest = arr[0];
    for (int i=0; i<size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout<<"The largest element in the array is "<<largest<<endl;
    return 0;
}