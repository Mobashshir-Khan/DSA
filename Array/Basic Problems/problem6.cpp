// print all the unique values of array

#include<iostream>
using namespace std; 

void unique(int arr[], int size)
{
    cout<<endl<<"The array of unique numbers is: "<<endl;
    for (int i=0; i<size; i++)
    {
        int count = 0;
        for (int j=0; j<size; j++)
        {
            if (i != j)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                }
            } 
        }
        if (count == 0 )
        {
            cout<<arr[i]<<" ";
        }
    }
}

int main()
{
    int size; 
    cout<<"Enter the number of elements: ";
    cin>>size;

    int arr[size];
    for (int i=0; i<size; i++)
    {
        cout<<"Enter "<<(i+1)<<" value: ";
        cin>>arr[i];
    }

    cout<<"The originl array is: "<<endl;
    for (int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    unique(arr, size);
}