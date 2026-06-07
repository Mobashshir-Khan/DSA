// Pair sum = Target value
// Brute force approach

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int>vec, int target)
{
    vector<int>ans;
    int size = vec.size();
    for (int i=0; i<size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if ((vec[i] + vec[j]) == target)
            {
                ans.push_back(vec[i]);
                ans.push_back(vec[j]);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int>vec = {2, 7, 9, 11, 13};
    int target = 13;

    vector<int>ans(2);
    ans = pairSum(vec, target);
    cout<<ans[0]<<","<<ans[1];
    return 0;
}



