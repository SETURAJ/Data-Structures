#include<bits/stdc++.h>
using namespace std;

int missing_ele(vector<int>arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
            arr[i]=n+1;
    }
    for(int i=0;i<n;i++)
    {
        int ele=abs(arr[i]);
        int index=ele-1;
        if(index<n && arr[index]>0)
            arr[index]*=(-1);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
            return i+1;
    }
    return n+1;
}

int main()
{
    vector<int>arr{4,2,1,5,-1};
    int n=arr.size();
    cout<<missing_ele(arr,n);
}