#include<iostream>
#include<deque>
using namespace std;
int count,res=0;
void find_max(int arr[],int k,int n)
{
    deque<int>q(k);
    int i;
    for(i=0;i<k;i++)
    {
        while((!q.empty())&&arr[i]>=arr[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    for(; i<n;i++)
    {   
        cout<<arr[q.front()]<<" ";
        while((!q.empty())&& q.front()<=i-k)
            q.pop_front();
        while((!q.empty())&&arr[i]>=arr[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    cout<<arr[q.front()];
}
int main()
{
    int arr[]={10,5,2,7,8,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    find_max(arr,k,n);
    return 0;

}