#include<bits/stdc++.h>
using namespace std;

int set_bits(int n)
{
    int count=0;
    while(n)
    {
        n&=(n-1);
        count++;
    }
    return count;
}

int bit_diff(int a,int b)
{
    return set_bits(a^b);
}

int main()
{
    int a=10,b=20;
    cout<<bit_diff(a,b);
    return 0;
}