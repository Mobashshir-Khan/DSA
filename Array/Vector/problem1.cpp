// Single number

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec = {9, 1, 2, 1, 8, 2, 9};
    int a = 0;
    for (int val : vec)
    {
        a = a^val;
    }
    cout<<"The single number is: "<<a;
}