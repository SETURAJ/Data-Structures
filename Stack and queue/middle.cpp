//Find middle element of stack

#include<bits/stdc++.h>
using namespace std;


void findmiddle(stack<int>s,int n,int curr)
{
    if(s.empty()||curr==n)
        return;
    int ele=s.top();
    s.pop();
    findmiddle(s,n,curr+1);
    if(n%2!=0)
    {
        if(curr==n/2)
        {
            s.push(ele);
            cout<<ele;
        }
        else
        {
            s.push(ele);
        }
    }
    else
    {
        if(curr==n/2 || curr==n/2-1)
        {
            s.push(ele);
            cout<<ele<<" ";
        }
        else
        {
            s.push(ele);
        }
    }
}

int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
   // s.push(10);


    findmiddle(s,s.size(),0);
    
    return 0;
   
}
