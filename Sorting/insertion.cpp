#include<iostream>
#include<vector>
using namespace std;

void insertion(vector<int>&v,int n)
{
    int i,j,key;
    for(int i=1;i<n;i++)
    {
        key=v[i];
        j=i-1;
        while(j>=0&&v[j]>key)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
    }
}

void print(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}

int main()
{
    vector<int>v{20,1,-8,5,9,2,3,0,4};
    int n=v.size();
    insertion(v,n);
    print(v);

    return 0;
}