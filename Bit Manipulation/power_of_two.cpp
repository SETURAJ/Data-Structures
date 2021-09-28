#include<bits/stdc++.h>
using namespace std;

int no_of_bits(int n)
{
    int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}

int main()
{
    int n=0;
    if(no_of_bits(n)==1)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}