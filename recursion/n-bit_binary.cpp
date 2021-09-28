#include<bits/stdc++.h>
using namespace std;

void solve(int n,int zero,int one,string res)
{
    if(n==0)
    {
        cout<<res<<endl;
        return;
    }
    if(zero<one)
    {
        string op1=res+"0";
        string op2=res+"1";
        solve(n-1,zero+1,one,op1);
        solve(n-1,zero,one+1,op2);
    }
    else
    {
        string op1=res+"1";
        solve(n-1,zero,one+1,op1);
    }
    return;

}

int main()
{
    int n=4;
    int zero=0,one=1;
    string res="1";
    solve(n-1,zero,one,res);
    return 0;
}