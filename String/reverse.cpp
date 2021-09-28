#include<iostream>
using namespace std;

string reverse(string str)
{
    int l=str.length();
    int i=0;
    int j=l-1;
    while(i<=j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }
    return str;
}

int main()
{
    string str;
    cin>>str;
    cout<<reverse(str);
    return 0;
}