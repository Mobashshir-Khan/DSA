#include<iostream>
#include<vector>
using namespace std; 

vector<int>pairSum (vector<int>vec, int target)
{
    int size = vec.size();
    int i = 0; 
    int j = size-1;
    vector<int>ans;

    while(i < j)
    {
        int sum = vec[i] + vec[j];
        if (sum < target)
        {
            i++;
        }
        else if (sum > target)
        {
            j--;
        }
        else if (sum == target)
        {
            ans.push_back(vec[i]);
            ans.push_back(vec[j]);
            return ans;
        }
    }
}

int main()
{
    vector<int>vec = {2, 7, 9, 10, 13};
    int target = 20;
    
    vector<int>ans(2);
    ans = pairSum (vec, target);
    cout<<ans[0]<<","<<ans[1];
}