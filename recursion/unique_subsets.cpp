#include<bits/stdc++.h>
using namespace std;

void solve(string s,string res,vector<string>&v)
{
    if(s.length()==0)
    {
        v.push_back(res);
        return;
    }
    string res1=res;
    string res2=res;
    res2.push_back(s[0]);
    s.erase(s.begin()+0);
    solve(s,res1,v);
    solve(s,res2,v);

}

int main()
{
    string s="aab";
    string res=" ";
    vector<string>v;
    solve(s,res,v);
    unordered_set<string>op;
    for(int i=0;i<v.size();i++)
    {
        op.insert(v[i]);
    }
    unordered_set<string> ::iterator itr;
    for(itr=op.begin();itr!=op.end();itr++)
        cout<<(*itr)<<" ";
}