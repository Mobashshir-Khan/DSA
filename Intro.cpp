#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> first = {1, 2, 3, 4, 5};
    cout << first[0];
    cout << first[1];
    cout << first[2];
    cout << first[3];
    cout << first[4];
    vector<int> second(5, 2);
    cout << second[0];
    cout << second[1];
    cout << second[2];
    cout << second[3];
    cout << second[4];
}