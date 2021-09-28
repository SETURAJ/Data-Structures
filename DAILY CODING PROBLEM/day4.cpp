#include<bits/stdc++.h>
using namespace std;
int findmissingpositive(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=0)
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
    int arr[]={4,2,1,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findmissingpositive(arr,n);
    return 0;
}