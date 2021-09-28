//USING minimum comparisons time complexity O(n)
#include<iostream>
using namespace std;
class minmaxpair
{
    public:
        int min;
        int max;
};
minmaxpair getminmax(int arr[], int n)
{
    minmaxpair obj;
    int i=0;
    if(n%2==0)
    {
        if(arr[0]<arr[1])
        {
            obj.min=arr[0];
            obj.max=arr[1];
        }
        else
        {
            obj.min=arr[1];
            obj.max=arr[0];
        }
        i=2;
    }
    else
    {
        obj.min=arr[0];
        obj.max=arr[0];
        i=1;
    }
    while(i<n-1)
    {
        if(arr[i]>arr[i+1])
        {
            if(arr[i]>obj.max)
                obj.max=arr[i];

            if(arr[i+1]<obj.min)
                obj.min=arr[i+1];
        }
        else
        {
            if(arr[i+1]>obj.max)
                obj.max=arr[i+1];
            if(arr[i]<obj.min)
                obj.min=arr[i];
        }
        i+=2;
    }
    return obj;
}
int main()
{
    int arr[]={1400,14,12,154,-150,-10,0,15,8220,145,-150,8220,10000,-250};
    int n=sizeof(arr)/sizeof(arr[0]);
    minmaxpair minmax=getminmax(arr,n);
    cout<<"Min Ele: "<<minmax.min<<"\n"<<"Max Ele: "<<minmax.max;

    return 0;
}