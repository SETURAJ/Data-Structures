#include<bits/stdc++.h>


using namespace std;

bool checklength(string str1,string str2,string res)
{
    if(res.length()==(str1.length()+str2.length()))
        return true;
    return false;
}

bool shufflecheck(string str1,string str2,string res)
{
   sort(str1.begin(),str1.end());
   sort(str2.begin(),str2.end());
   sort(res.begin(),res.end());
   int i=0,j=0,k=0;
   while(k!=res.length())
   {
       if(i<str1.length()&&str1[i]==res[k])
            i++;
       else if(j<str2.length()&&str2[j]==res[k])
            j++;
       else
            return false;

        k++;
   }
   return true;
}

int main()
{
    string str1="xy";
    string str2="12";
    string result="12yx";
    if(checklength(str1,str2,result) && shufflecheck(str1,str2,result))
        cout<<"True";
    else
        cout<<"False";
}