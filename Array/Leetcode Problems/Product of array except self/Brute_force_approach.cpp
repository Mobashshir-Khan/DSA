#include<iostream>
#include<vector>
using namespace std;

vector<int>productArray(vector<int>vec, int size)
{
    vector<int>mul(size, 1);
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            if (i != j)
            {
                mul[i] *= vec[j];
            }
        }
    }
    
    return mul;
}
int main()
{
    vector<int>vec = {1, 2, 3, 4};
    int size = vec.size();

    vector<int>ans = productArray(vec, size);
    for (int val : ans)
    {
        cout<<val<<" ";
    }
}