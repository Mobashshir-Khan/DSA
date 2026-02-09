#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec={1,2};
    cout<<"size = "<<vec.size()<<endl; 
    for(int val : vec)
    {
        cout<<val<<endl;
    }

    vec.push_back(3);
    vec.push_back(4);
    cout<<"size after push back = "<<vec.size()<<endl;
    for(int val : vec)
    {
        cout<<val<<endl;
    }

    vec.pop_back();
    cout<<"size after pop back = "<<vec.size()<<endl;
    for(int val : vec)
    {
        cout<<val<<endl;
    }

    cout<<"First value = "<<vec.front()<<endl;
    cout<<"last value = "<<vec.back()<<endl;
    cout<<"value at index 1 = "<<vec.at(1)<<endl;
}