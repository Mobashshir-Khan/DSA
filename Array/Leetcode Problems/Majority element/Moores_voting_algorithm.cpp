#include<iostream>
#include<vector>
using namespace std; 

int majorityElement (vector<int>vec, int size)
{
    int count = 0;
    int ans;
    int n = size/2;
    for (int i=0; i<size; i++)
    {
        if (count == 0)
        {
            ans = vec[i];
        }
        if (ans == vec[i])
        {
            count++;
        }
        else 
        {
            count--;
        }
    }
    return ans;
}

int main()
{
    vector<int>vec = {1, 2, 1, 2, 2};
    int size = vec.size();

    int ans = majorityElement (vec, size);
    cout<<ans;
    return 0;
}