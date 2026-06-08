// Intersection of two arrays

#include<iostream>
using namespace std;

void intersection(int arr1[], int size1, int arr2[], int size2)
{
    cout<<"The intersection is: "<<endl;
    for (int i=0; i<size1; i++)
    {
        int count = 0;
        for (int j=0; j<size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                count++;
                break;
            }
        }
        if (count > 0)
        {
            cout<<arr1[i]<<" ";
        }
    }
}

int main()
{
    int size1, size2;
    
    cout<<"Enter the number of elements in 1st array: ";
    cin>>size1;
    cout<<"Enter the number of elements in 2nd array: ";
    cin>>size2;

    int arr1[size1], arr2[size2];
    for (int i=0; i<size1; i++)
    {
        cout<<"Enter "<<(i+1)<<" Element of 1st array: ";
        cin>>arr1[i];
    }
    cout<<endl<<endl;
    for (int i=0; i<size2; i++)
    {
        cout<<"Enter "<<(i+1)<<" Element of 2nd array: ";
        cin>>arr2[i];
    }

    intersection(arr1, size1, arr2, size2);
}