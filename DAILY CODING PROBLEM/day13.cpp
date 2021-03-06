#include<bits/stdc++.h>
using namespace std;
#define MAX_CHARS 26
bool isValid(int count[],int k)
{
    int val=0;
    for(int i=0;i<MAX_CHARS;i++)
    {
        if(count[i]>0)
            val++;
    }
    return (k>=val);
}
void kuniques(string s,int k)
{
    int u=0;
    int n=s.length();
    int count[MAX_CHARS];
    memset(count,0,sizeof(count));
    for(int i=0;i<n;i++)
    {
        if(count[s[i]-'a']==0)
            u++;
        count[s[i]-'a']++;
    }
    if(u<k)
        cout<<"Not enough unique characters";
    int curr_start=0,curr_end=0;
    int max_window_size=1,max_window_start=0;
    memset(count,0,sizeof(count));
    count[s[0]-'a']++;
    for(int i=1;i<n;i++)
    {
        count[s[i]-'a']++;
        curr_end++;
        while(!isValid(count,k))
        {
            count[s[curr_start]-'a']--;
            curr_start++;
        }
        if(curr_end-curr_start+1>max_window_size)
        {
            max_window_size=curr_end-curr_start+1;
            max_window_start=curr_start;
        }
    }
    cout<<s.substr(max_window_start,max_window_size)<<" "<<max_window_size;
}
int main()
{
    string s="aabacbebebe";
    int k=3;//Uniquie characters atmost
    kuniques(s,k);
    return 0;
}