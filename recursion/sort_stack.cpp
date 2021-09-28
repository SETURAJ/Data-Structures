#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &s,int temp)
{
    if(s.size()==0 || s.top()<=temp)
    {
        s.push(temp);
        return;
    }
    int val=s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
}

void sort_stack(stack<int> &s)
{
    if(s.size()==1)
        return;
    int temp=s.top();
    s.pop();
    sort_stack(s);
    insert(s,temp);
}

void print_stack(stack<int> s)
{
    if(s.empty())
        return;
    int x=s.top();
    s.pop();
    print_stack(s);
    cout<<x<<" ";
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
    sort_stack(s);
    print_stack(s);
    return 0;
}