#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find_min(int arr[],int k,int n)
{
    sort(arr,arr+n);
    int res=arr[n-1]-arr[0];
    int min_ele,max_ele;

    for(int i=1;i<n;i++)
    {
        if(arr[i]>=k&&arr[n-1]>=k)
        {
            max_ele=max(arr[i-1]+k,arr[n-1]-k);
            min_ele=min(arr[0]+k,arr[i]-k);
            res=min(res,max_ele-min_ele);
        }
    }
    return res;
}

int main()
{
    int k=3,n=5;
    int arr[n]={3,9,12,16,20};
    cout<<find_min(arr,k,n);
    return 0;
}