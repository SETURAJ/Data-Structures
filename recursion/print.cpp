#include<iostream>
using namespace std;

void print(int n)
{
    if(n==0)
        return ;
    //cout<<n<<" "; prints n to 1
    print(n-1);
    cout<<n<<" ";//prints 1 to n
    
}

int main()
{
    int n=10;
    print(10);
}