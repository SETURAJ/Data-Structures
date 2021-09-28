#include <iostream>
#include <unordered_map>
using namespace std;

void duplicate(string str)
{
     unordered_map<char,int>s;
     for(int i=0;i<str.length();i++)
     {
         s[str[i]]++;
     }
     unordered_map<char,int>::iterator itr;
     for(itr=s.begin();itr!=s.end();itr++)
     {
         if(itr->second>1)
         {
             cout<<itr->first<<" "<<itr->second<<endl;
         }
         
     }
}

int main()
{
   
    string str;
    cin>>str;
    duplicate(str);
    return 0;
}