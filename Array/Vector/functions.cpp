// Functions of vector

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>vec = {'a', 'b', 'c', 'd', 'e'};

    // Size()
    cout<<"Size: "<<vec.size()<<endl;
    for (char val : vec)
    {
        cout<<val<<endl;
    }

    // push_back()
    vec.push_back('f');
    cout<<"Push back"<<endl;
    cout<<"Size: "<<vec.size()<<endl;
    for (char val : vec)
    {
        cout<<val<<endl;
    }

    // pop_back()
    vec.pop_back();
    cout<<"Pop back"<<endl;
    cout<<"Size: "<<vec.size()<<endl;
    for (char val : vec)
    {
        cout<<val<<endl;
    }

    // Front
    cout<<"Front: "<<vec.front()<<endl;

    // Back
    cout<<"Back: "<<vec.back()<<endl;

    // At
    cout<<"At index 2: "<<vec.at(2);
}