#include<bits/stdc++.h>
using namespace std;

int solve(int n,int s,int d,int h)
{
    int count=1;
    if(n==1)
    {
        cout<<"Moving plate "<<n<<" from "<<s<<" to "<<d<<endl;
    }
    else if(n>1)
    {
        count+=solve(n-1,s,h,d);
        cout<<"Moving plate "<<n<<" from "<<s<<" to "<<d<<endl;
        count+=solve(n-1,h,d,s);
    }
    
    return count;
}

int main()
{
    int n=5;
    int s=1,h=2,d=3;
    cout<<solve(n,s,d,h);
    
}