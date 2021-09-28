//Time complexity is O(N);


#include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[],int n)
{
    int start=0,end=n-1;
    while(start<end)
    {
        int temp=0;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[]={1,2,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    reversearray(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
