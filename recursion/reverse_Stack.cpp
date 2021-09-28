#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &s,int val)
{
    if(s.size() == 0)
    {
        s.push(val);
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,val);
    s.push(temp);
  
}

void reverse(stack<int>&s)
{
    if(s.size()==1)
        return;
    int temp=s.top();
    s.pop();
    reverse(s);
    insert(s,temp);
}

void print_stack(stack<int> &s)
{
    if(s.empty())
        return;
    int x=s.top();
    s.pop();
    print_stack(s);
    cout<<x<<" ";
    s.push(x);
   
}

int main()
{
    stack<int> s;
    s.push(2);
    s.push(0);
    s.push(5);
    s.push(10);
    s.push(3);
    s.push(8);
    s.push(11);
    print_stack(s);
    cout<<endl;
    reverse(s);
    print_stack(s);
    return 0;
}