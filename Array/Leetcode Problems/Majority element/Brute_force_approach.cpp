#include<iostream>
#include<vector>
using namespace std;

int majorityElement (vector<int>vec, int size)
{
    int n = size/2;
    int count = 1;
    for (int i=0; i<size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if (vec[i] == vec[j])
            {
                count++;
            }
        }
        if (count > n)
        {
            return vec[i];
        }
    }
}

int main()
{
    vector<int>vec = {2, 2, 1, 1, 1, 2, 2};
    int size =  vec.size();

    int ans = majorityElement (vec, size);
    cout<<ans;
}