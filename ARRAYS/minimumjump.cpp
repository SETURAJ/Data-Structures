#include<iostream>
using namespace std;

int jump(int arr[],int n)
{
    int count=0,steps=0;
    for(int i=0;i<n;)
    {
        if(arr[i]==0)
            return 0;
        count+=arr[i];
        if(count>=n-1)
        {
            steps++;
            return steps;
        }
        else
        {
            steps++;
            i+=arr[i];
        }
    }
    return 0;
}

int main()
{
    int N=6;
    int arr[N]={1, 4, 1, 2, 0, 0};
    cout<<jump(arr,N);
}