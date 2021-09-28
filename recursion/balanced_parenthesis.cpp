#include<bits/stdc++.h>
using namespace std;

void solve(int open,int close,string res,vector<string> &op)
{
    if(open==0&&close==0)
    {
        op.push_back(res);
        return;
    }
    if(open!=0)
    {
        string op1=res;
        op1.push_back('(');
        solve(open-1,close,op1,op);
    }
    if(close>open)
    {
        string op2=res;
        op2.push_back(')');
        solve(open,close-1,op2,op);
    }
    return;

}

int main()
{
    int n=4;
    int open=n,close=n;
    string res="";
    vector<string> op;
    solve(open,close,res,op);
    for(int i=0;i<op.size();i++)
        cout<<op[i]<<endl;
    return 0;
}