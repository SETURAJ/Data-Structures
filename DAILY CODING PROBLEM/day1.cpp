#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int n,size;
    cin>>size;
    while(size--)
    {
        cin>>n;
        v.push_back(n);
    }
    int target,temp;
    cout<<"Target sum"<<endl;
    cin>>target;
    for(int i=0;i<v.size();i++)
    {
        temp=target-v[i];
        if(std::find(v.begin(),v.end(),temp)!=v.end())
        {
            cout<<"True";
            exit(0);
        }
        else 
        {
            cout<<"False";
            exit(0);
        }
    }
}
