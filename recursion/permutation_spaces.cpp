#include<bits/stdc++.h>
using namespace std;

void solve(string s,string res)
{
    if(s.length()==0)
    {
        cout<<res<<endl;
        return;
    }
    string op1=res+" "+s[0];
    string op2=res+s[0];
    s.erase(s.begin()+0);
    solve(s,op1);
    solve(s,op2);
    return;

}

int main()
{
    string s="abc";
    string res="";
    res=res+s[0];
    s.erase(s.begin()+0);
    solve(s,res);
}