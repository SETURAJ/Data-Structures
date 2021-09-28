#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int> &v,int temp)
{
    if(v.size()==0 ||v[v.size()-1]<=temp)
    {
        v.push_back(temp);
        return ;
    }
    int val=v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(val);
    
}

void sort_arr(vector<int> &v)
{
    if(v.size()==1)
        return;
    int temp=v[v.size()-1];
    v.pop_back();
    sort_arr(v);
    insert(v,temp);
}

void print_arr(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}

int main()
{
    vector<int>v{10,-5,2,0,1,8,12,3};
    sort_arr(v);
    print_arr(v);
}