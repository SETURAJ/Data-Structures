#include<bits/stdc++.h>
using namespace std;
int findmaxsum(vector<int>arr,int n)
{
    int incl=arr[0];
    int excl=0;
    int temp;
    for(int i=1;i<n;i++)
    {
        temp=max(incl,excl);
        incl=excl+arr[i];
        excl=temp;
    }
    return ((incl>excl)?incl:excl);
}
int main()
{
    vector<int> arr={2, 4, 6, 2, 5};
    cout<<findmaxsum(arr,arr.size());
    return 0;
}