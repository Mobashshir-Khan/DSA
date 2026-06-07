// For each loop

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>vec = {'a', 'b', 'c', 'd', 'e', 'f'};
    for (char val : vec)
    {
        cout<<val<<endl;
    }
}