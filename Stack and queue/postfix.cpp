#include<bits/stdc++.h>
using namespace std;

int postfix(string str)
{
    stack<int>s;
    for(int i=0;i<str.size();i++)
    {
       
       if(isdigit(str[i]))
       {
           s.push((int)(str[i]-'0'));
       }
       else
       {
           if(s.empty()==true)
           {
               cout<<"Invalid expression";
               exit(1);
           }
           float n1,n2;
           n1=s.top();
           s.pop();
           if(s.empty()==true)
           {
               cout<<"Invalid expression";
               exit(1);
           }
           n2=s.top();
           s.pop();
           switch (str[i])
           {
                case '+': s.push(n2+n1); break;
                case '-': s.push(n2-n1); break;
                case '*': s.push(n2*n1); break;
                case '/': s.push(n2/n1); break;
           }
       }
    }
    int res=s.top();
    s.pop();
    if(s.empty()==true)
        return res;
    else
    {
        cout<<"Invalid expression";
               exit(1);
    }
   
}

int main()
{
    string str="231*+9-";
    cout<<postfix(str);
    return 0;
}