#include<iostream>
#include<stdlib.h>

using namespace std;

class twostacks{
    int *arr;
    int size;
    int top1,top2;
    public:
    twostacks(int n)
    {
        size=n;
        arr = new int[n];
        top1=-1;
        top2=size;
    }
    void push1(int data)
    {
        if(top1 < top2 - 1)
        {
            top1++;
            arr[top1]=data;
        }
        else
        {
            cout<<"Stack overflow stack 1";
            exit(1);
        }
    }
    void push2(int data)
    {
        if(top1 < top2 - 1)
        {
            top2--;
            arr[top2]=data;
        }
        else
        {
            cout<<"Stack overflow stack 2";
            exit(1);
        }
    }
    int pop1()
    {
        if(top1<0)
        {
            cout<<"Stack underflow stack 1";
            exit(1);
        }
        int res=arr[top1];
        top1--;
        return res;
    }

    int pop2()
    {
        if (top2 < size) {
            //cout<<"HI";
            int x = arr[top2];
            top2++;
           // cout<<top2<<" "<<size;
            return x;
        }
        else {
            cout << "Stack UnderFlow stack 2";
            exit(1);
        }
    }


};

int main()
{
    twostacks t(5);
    t.push1(1);
    t.push2(2);
    t.push2(3);
    t.push1(4);
    t.push2(5);
  
    cout<<t.pop1()<<endl;
    
    cout<<t.pop2()<<endl;
    cout<<t.pop2()<<endl;
    cout<<t.pop2()<<endl;
    cout<<t.pop2()<<endl;
    cout<<t.pop2()<<endl;
   

}
