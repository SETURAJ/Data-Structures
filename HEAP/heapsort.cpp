#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[largest])
        largest=left;
    if(right<n && arr[right]>arr[largest])
        largest=right;
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[],int n)
{
    int size=n/2-1;
    for(int i=size;i>=0;i--)
        heapify(arr,n,i);//we will create a max heap now
    for(int i=n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
    int arr[]={12,11,4,8,5,13,6,88,21,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);
    printArray(arr,n);
    return 0;
}
