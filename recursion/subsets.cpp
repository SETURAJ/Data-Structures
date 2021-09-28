#include<bits/stdc++.h>
using namespace std;

void solve(string s,string res)
{
    if(s.length()==0)
    {
        cout<<res<<" ";
        return;
    }
    string res1=res;
    string res2=res;
    res2.push_back(s[0]);
    s.erase(s.begin()+0);
    solve(s,res1);
    solve(s,res2);

}

int main()
{
    string s="aab";
    string res=" ";
    solve(s,res);
}