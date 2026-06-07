#include<iostream>
#include<climits>
using namespace std;

int maxWater(int arr[], int size)
{
    int j = size-1;
    int height, width, water_volume;
    int maxVolume = INT_MIN;

    for (int i=0; i<size; i++)
    {
        height = min(arr[i], arr[j]);
        width = j - i;
        water_volume = width * height;
        maxVolume = max(maxVolume, water_volume);
    }
    return maxVolume;
}

int main()
{
    int arr[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<maxWater(arr, size);
    return 0;
}

