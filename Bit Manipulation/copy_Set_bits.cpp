#include<bits/stdc++.h>
using namespace std;

int copysetbits(int x,int y,int l,int r)
{
    if(l<1|| r>32)
        return 0;
    for(int i=l;i<=r;i++)
    {
        int mask=1 << (i-1);
        if(y&mask)
            x=x|mask;
        
    }
    return x;
}
int main()
{
    int x=8,y=7,l=1,r=2;
    cout<<copysetbits(x,y,l,r);
    return 0;
}