#include<bits/stdc++.h>
using namespace std;

bool check(string str)
{
    stack<char>s;
    char ch;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='{'||str[i]=='('|| str[i]=='[')
        {
            s.push(str[i]);
            continue;
        }
        if(s.empty()==true)
            return false;
        switch (str[i])
        {
        case ')':
            ch=s.top();
            s.pop();
            if(ch=='{'||ch=='[')
                return false;
            break;

        case '}':
            ch=s.top();
            s.pop();
            if(ch=='('||ch=='[')
                return false;
            break;

        case ']':
            ch=s.top();
            s.pop();
            if(ch=='{'||ch=='(')
                return false;
            break;
        
        
        }
    }
    return s.empty();
}

int main()
{
    string str="[()]{}{[()()]()}({[]})";
    if(check(str))
        cout<<"Yes";
    else
        cout<<"No";

}