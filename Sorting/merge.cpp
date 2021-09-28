#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}


int main()
{
    vector<int>v{20,1,-8,5,9,2,3,0,4};
    int n=v.size();
    
    print(v);
    return 0;
}