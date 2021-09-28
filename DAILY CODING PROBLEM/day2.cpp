#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int size;
    cin>>size;
    int total=1,n;
    while(size--)
    {
        cin>>n;
        v.push_back(n);
    }
    vector<int>res(1,1);
    for(int i=0;i<v.size();i++)
    {
        res.push_back(res.back()*v[i]); 
    }
    int b=1;
    for(int i=0;i<v.size();i++)
    {
        res[v.size()-i-1]*=b;
        b*=v[v.size()-i-1];
    }
    res.pop_back();
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    return 0;
}