#include<iostream>
#include<vector>
using namespace std;

vector<int>productArray(vector<int>vec, int size)
{
    // 1st solution with time complexity O(n)
    // Left side
    // vector<int>left(size, 1);
    // for (int i=1; i<size; i++)
    // {
    //     left[i] = left[i-1] * vec[i-1];
    // }

    // Right side
    // vector<int>right(size, 1);
    // for (int i=size-2; i>=0; i--)
    // {
    //     right[i] = right[i+1] * vec[i+1];
    // }

    // vector<int>ans(size, 1);
    // for (int i=0; i<size; i++)
    // {
    //     ans[i] = left[i] * right[i];
    // }
    // return ans;

    vector<int>ans(size, 1);
    int left = 1;
    for (int i=1; i<size; i++)
    {
        left = left * vec[i-1];
        ans[i] *= left;
    }

    int right = 1;
    for (int i=size-2; i>=0; i--)
    {
        right = right * vec[i+1];
        ans[i] *= right;
    }

    return ans;
}

int main()
{
    vector<int>vec = {2, 2, 3, 4};
    int size = vec.size();

    vector<int>ans = productArray(vec, size);
    for (int val : ans)
    {
        cout<<val<<" ";
    }
}