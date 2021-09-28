#include<iostream>
using namespace std;

void sort(int arr[],int n)
{
    int n0=0,n1=0,n2=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            n0++;
        else if(arr[i]==1)
            n1++;
        else
            n2++;
    }
    
    for(int i=0;i<n0;i++)
        arr[i]=0;
    for(int i=n0;i<n0+n1;i++)
        arr[i]=1;
    for(int i=n0+n1;i<n;i++)
        arr[i]=2;
}

int main()
{
    int arr[]={1,1,1,0,0,2,2,2,0,0,0,1,2,0,1,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}