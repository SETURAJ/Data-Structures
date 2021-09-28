#include<iostream>
using namespace std;

bool palindrome(string str)
{
    int l=str.length();
    int i=0;
    int j=l-1;
    while(i<=j)
    {
        if(str[i]!=str[j])
            return 0;
        else
        {
            i++;
            j--;
        }
    }
    return 1;
}

int main()
{
    string str;
    cin>>str;
    if(palindrome(str))
        cout<<"String is palindrome";
    else
        cout<<"String is not palindrome";
}