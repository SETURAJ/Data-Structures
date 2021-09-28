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

int position(int n)
{
    if(no_of_bits(n)==1)
        return log2(n)+1;
    else
        return -1;
}

int main()
{
    int n=8;
    cout<<position(n);
    return 0;
}