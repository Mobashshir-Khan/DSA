// Uppercase or Lowercase
// A-Z --> 65-90
// a-z --> 97-122

#include<iostream>
using namespace std;
int main()
{
    char alpha;
    int alphanum;

    cout<<"Enter the alphabet: ";
    cin>>alpha;
    alphanum = int(alpha);
    
    if ((alphanum >= 65) && (alphanum <= 90))
    {
        cout<<"Alphabet is Uppercase";
    }
    else if ((alphanum >= 97) && (alphanum <= 122))
    {
        cout<<"Alphabet is lowercase";
    }
    else
    {
        cout<<"Enter a valid alphabet!!!";
    }
    return 0;
}