//HANDLE DUPLICATES ALSO Time Complexity O(m+n)
#include<iostream>
#include<set>
using namespace std;

void unionarray(int arr1[],int arr2[],int m,int n)
{
    
    int i=0,j=0;
    set<int>s;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            s.insert(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            s.insert(arr2[j]);
            j++;
        }
        else
        {
            s.insert(arr1[i]);
            i++;
            j++;
        }
    }
    while(i<m)
        {
            s.insert(arr1[i]);
            i++;
        }
    while(j<n)
        {
            s.insert(arr2[j]);
            j++;
        }
    set<int>::iterator itr;
    for(itr=s.begin();itr!=s.end();itr++)
        cout<<*itr<<" ";
    cout<<endl;
}
void intersectionarray(int arr1[],int arr2[],int m,int n)
{
    
    int i=0,j=0;
    set<int>s;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            //s.insert(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            //s.insert(arr2[j]);
            j++;
        }
        else
        {
            s.insert(arr1[i]);
            i++;
            j++;
        }
    }
    set<int>::iterator itr;
    for(itr=s.begin();itr!=s.end();itr++)
        cout<<*itr<<" ";
    cout<<endl;
}
int main()
{
    int arr1[]={1,1,2,4,5,10,14,15,45};
    int arr2[]={1,2,2,3,4,5,10,11,12,16,17};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    unionarray(arr1,arr2,m,n);
    intersectionarray(arr1,arr2,m,n);
    return 0;
}