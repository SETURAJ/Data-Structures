#include<bits/stdc++.h>
using namespace std;

void solve(string s,string res)
{
    if(s.length()==0)
    {
        cout<<res<<endl;
        return;
    }
    if(!isdigit(s[0]))
    {
        string op1=res;
        string op2=res;
        op1.push_back(tolower(s[0]));
        op2.push_back(toupper(s[0]));
        s.erase(s.begin()+0);
        solve(s,op1);
        solve(s,op2);
    }
    else
    {
        res=res+s[0];
        s.erase(s.begin()+0);
        solve(s,res);
    }
    return;
    
}

int main()
{
    string s="a1b2";
    string res;
    solve(s,res);
    return 0;
}