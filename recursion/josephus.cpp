#include<bits/stdc++.h>
using namespace std;

void solve(int index,int k,vector<int>res)
{
    if(res.size()==1)
    {
        cout<<res[0];
        return;
    }
    index=(index+k)%res.size();
    res.erase(res.begin()+index);
    solve(index,k,res);
}

int main()
{
    int n=40;
    int k=7;
    vector<int>res;
    for(int i=1;i<=n;i++)
        res.push_back(i);
    k=k-1;
    solve(0,k,res);
    return 0;
}