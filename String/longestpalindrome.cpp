#include<bits/stdc++.h>
using namespace std;

string palindromicsubstring(string str)
{
    int len=str.length();
    if(len<=1)
        return str;
    int max_len=1,st=0;
    //Will Return the substring of even length
        for(int i=0;i<len-1;i++)
        {
            int l=i,r=i+1;
            while(l>=0&&r<len)
            {
                if(str[l]==str[r])
                {
                    l--;
                    r++;
                }
                else
                    break;
            }
            int len=r-1-l;
            if(len>max_len)
            {
                max_len=len;
                st=l+1;
            }
        }
        //Will return substring of odd length
        for(int i=0;i<len-1;i++)
        {
            int l=i,r=i;
            while(l>=0&&r<len)
            {
                if(str[l]==str[r])
                {
                    l--;
                    r++;
                }
                else
                    break;
            }
            int len=r-1-l;
            if(len>max_len)
            {
                max_len=len;
                st=l+1;
            }
        }
        return str.substr(st,max_len);
    
}

int main()
{
    string str="setuutes";
    cout<<palindromicsubstring(str);
}