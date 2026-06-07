// Kadanes algorithm

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    vector<int>vec = {-1, -2, 3, 4, 5};
    int maxSum = INT_MIN;
    int sum = 0;
    
    for (int val : vec)
    {
        sum += val;
        maxSum = max(sum, maxSum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout<<"Maximum subarray sum: "<<maxSum;
}