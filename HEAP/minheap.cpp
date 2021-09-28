//Create min heap from array
#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int smallest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]<arr[smallest])
        smallest=left;
    if(right<n && arr[right]<arr[smallest])
        smallest=right;
    if(smallest!=i)
    {
        swap(arr[i],arr[smallest]);
        heapify(arr,n,smallest);
    }
}
void createheap(int arr[],int n)
{
    int startindx=(n/2)-1;//Index of last non leaf node
    for(int i=startindx;i>=0;i--)
        heapify(arr,n,i);
}
void printHeap(int arr[], int n)
{
    cout << "Array representation of Heap is:\n";
  
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
    int arr[]={1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int n=sizeof(arr)/sizeof(arr[0]);
    createheap(arr,n);
    printHeap(arr,n);
}