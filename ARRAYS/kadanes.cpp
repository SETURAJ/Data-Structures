//LARGEST CONTINUOS SUM
//Modified a kadanes algo to get the minimum value in negative array also
#include<iostream>
#include<vector>
using namespace std;

int kadanes(vector<int> arr,int n)
{
    int res=INT_MIN,max_till=0,max_ele=INT_MIN;
    for(int i=0;i<n;i++)
    {
        max_till=max(max_till+arr[i],0);
        res=max(max_till,res);
        max_ele=max(max_ele,arr[i]);
    }
    if(res==0)
        res=max_ele;
    
    return res;
}

int main()
{
    vector<int>arr{-2, -3,  -1, -2, };
    int n=arr.size();
    cout<<kadanes(arr,n);
}