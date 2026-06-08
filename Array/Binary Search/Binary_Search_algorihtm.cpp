#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>vec, int size, int target)
{
    int st = 0;
    int end = size - 1;

    while (st <= end)
    {
        int mid = st + (end-st)/2;
        if (vec[mid] < target)
        {
            st = mid + 1;
        }
        else if (vec[mid] > target)
        {
            end = mid - 1; 
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int>vec = {-1, 0, 3, 4, 5, 9};
    int target = 4;
    int size = vec.size();

    cout<<BinarySearch(vec, size, target);
    return 0;
}