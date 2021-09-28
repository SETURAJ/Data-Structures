#include<bits/stdc++.h>
using namespace std;

string reverse(string str)
{
    string res="";
    if(str.length()==0 || str.length()==1)
        return str;
    stack<char>s;
    for(int i=0;i<str.length();i++)
    {
        s.push(str[i]);
    }
    for(int i=0;i<str.length();i++)
    {
        char ch=s.top();
        s.pop();
        res+=ch;
    }
    return res;
}
int main()
{
    string str;
    cin>>str;
    cout<<reverse(str);
}