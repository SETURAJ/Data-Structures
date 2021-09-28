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
    int n=10;
    cout<<no_of_bits(n);
    return 0;
}