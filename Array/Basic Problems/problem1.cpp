// Marks of students

#include<iostream>
using namespace std;
int main()
{
    int marks[5] = {65, 68, 98, 35, 65};
    for (int i=0; i<sizeof(marks)/4; i++)
    {
        cout<<marks[i]<<endl;
    }
    return 0;
} 

