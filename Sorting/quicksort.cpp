#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>&v,int low,int high)
{
    int pivot=v[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(v[j]<pivot)
        {
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[high]);
    return i+1;
}

void quicksort(vector<int>&v,int low,int high)
{
    if(low<high)
    {
        int pi=partition(v,low,high);
        quicksort(v,low,pi-1);
        quicksort(v,pi+1,high);
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
    quicksort(v,0,n-1);
    print(v);
}