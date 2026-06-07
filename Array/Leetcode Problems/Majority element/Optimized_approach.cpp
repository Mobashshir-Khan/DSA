#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int majorityElement (vector<int>vec, int size)
{
    int n = size/2;
    sort(vec.begin(), vec.end());
    int count = 1;
    for (int i=0; i<size; i++)
    {
        if (vec[i] == vec[i+1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count > n)
        {
            return vec[i];
        }
    }
}

int main()
{
    vector<int>vec = {3, 2, 3};
    int size = vec.size();

    
    int ans = majorityElement (vec, size);
    cout<<ans;
}