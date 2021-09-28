#include<bits/stdc++.h>
using namespace std;

void solve(string str,string res)
{
    if(str.size() == 0)
    {
        cout<<res<<endl;
        return;
    }
    string op1=res+str[0];
    string op2=res;
    op2.push_back(toupper(str[0]));
    str.erase(str.begin()+0);
    solve(str,op1);
    solve(str,op2);
    return;
}

int main()
{
    string str="ab";
    string res;
    solve(str,res);
    return 0;
}