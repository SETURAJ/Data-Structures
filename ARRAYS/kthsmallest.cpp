//Time Complexity O(logn) best and O(n) worst


#include<iostream>
#include<set>
using namespace std;
int main()
{
    int arr[]={10,12,18,74,20,1,5,8,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=5;//kth smallest element 
    if(k==0 )
        exit(0);
    set<int>s(arr,arr+n);
    set<int>::iterator itr;
    itr=s.begin();
    advance(itr,k-1);
    cout<<*itr;
}