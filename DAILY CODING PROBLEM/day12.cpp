#include<bits/stdc++.h>
using namespace std;

int countallways(int n,int m)
{
    int res[n];
    res[0]=1;
    res[1]=1;
    for(int i=2;i<n;i++)
    {
        res[i]=0;
        for(int j=1;j<=m&&j<=i;j++)
        {
            res[i]+=res[i-j];
        }
    }
    return res[n-1];
}
int countways(int s,int m)
{
    return countallways(s+1,m);
}
int main()
{
    int s=4,m=2;// 1 and 2 steps at the time
    cout<<countways(s,m);
    return 0;
}