#include<iostream>
#include<vector>
using namespace std;

void cycle(vector<int>arr,int n )
{
    for(int i=1;i<n;i++)
    {
        swap(arr[i],arr[0]);
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    vector<int> res{1,2,3,4,5};
    int n=res.size();
    cycle(res,n);
}