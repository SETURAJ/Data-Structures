#include<iostream>
#include<time.h>
#define ll long long
using namespace std;
int main()
{
    srand(time(NULL));
    string n,res;
    ll count=0;
    while(cin>>n)
    {
        count++;
        int rn=(rand()%count)+1;
        if(count==1 || rn==count-1)
            res=n;
        cout<<res<<endl;
    }
    return 0;
}