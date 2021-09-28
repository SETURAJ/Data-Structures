#include<bits/stdc++.h>
using namespace std;

void find_middle(stack<int>&s,int k)
{
    if(k==1)
    {
        s.pop();
        return;
    }
    int x=s.top();
    s.pop();
    find_middle(s,k-1);
    s.push(x);
}

void print(stack<int>s)
{
    if(s.size()==0)
        return ;
    int x=s.top();
    s.pop();
    print(s);
    cout<<x<<" ";
}

int main()
{
    stack<int> s;
    s.push(2);
    s.push(0);
    s.push(5);
    s.push(3);
    s.push(8);
    s.push(11);
    s.push(12);
    
    cout<<s.size()/2+1<<endl;
    find_middle(s,s.size()/2+1);
    print(s);
    return 0;
}
