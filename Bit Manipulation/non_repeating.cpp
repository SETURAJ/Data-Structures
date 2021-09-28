#include<bits/stdc++.h>
using namespace std;

vector<int>non_repeat_num(vector<int>arr,int n)
{
    int x_or=arr[0];
    int set_bit_no;
    for(int i=1;i<n;i++)
        x_or=x_or^arr[i];
    int x=0,y=0;
    set_bit_no=x_or&~(x_or-1);
    for(int i=0;i<n;i++)
    {
        if(arr[i]&set_bit_no)
            x=x^arr[i];
        else
            y=y^arr[i];
    }
    vector<int>res;
    res.push_back(x);
    res.push_back(y);
    return res;

}

int main()
{
    vector<int>arr{1,2,3,2,1,4};
    int n=arr.size();
    vector<int>res=non_repeat_num(arr,n);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
}