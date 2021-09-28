#include<iostream>
using namespace std;

bool rotations(string str1,string str2)
{
    if(str1.length()!=str2.length())
        return false;
    string temp=str1+str1;
    return (temp.find(str2)!=string::npos);
}

int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    if(rotations(str1,str2))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}