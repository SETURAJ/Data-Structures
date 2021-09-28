#include<bits/stdc++.h>
using namespace std;
function<int(int (*p)(int,int))>cons(int a,int b)
{
    auto pair=[a,b](int(*p)(int,int))->int
    {
        return (*p)(a,b);
    };
    return pair;
}
int car(function<int (int(*f)(int, int))> cons)
{
  auto get_a = [](int a, int b) -> int
  {
    return a;
  };
  return cons(*get_a);
}
int cdr(function<int (int(*f)(int, int))> cons)
{
    auto get_b=[](int a, int b) -> int
    {
        return b;
    };
    return cons(*get_b);
}
int main()
{
    function<int(int (*p)(int,int))>conspair=cons(5,8);
    int a=car(conspair);
    int b=cdr(conspair);
    cout<<a<<" "<<b;
}