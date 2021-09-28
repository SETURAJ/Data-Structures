#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int arr2[],int n,int m)
{
    int j=0,i=n-1;
    while(j<m&&i>=0)
    {
        if(arr2[j]<arr1[i])
        {
            swap(arr2[j],arr1[i]);
            j++;
            i--;
        }
        else
        {
            j++;
        }
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);

}

int main()
{
    int arr1[]={1, 5, 9, 10, 15, 20};
    int arr2[]={2, 3, 8, 13};
    int N=6,M=4;
    merge(arr1,arr2,N,M);
    for(int i=0;i<N;i++)
        cout<<arr1[i]<<" ";
    for(int i=0;i<M;i++)
        cout<<arr2[i]<<" ";
    return 0;
}