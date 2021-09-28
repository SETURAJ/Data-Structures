#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int min_cost_before_house(int tcm[],int color)
{
    tcm[color]=INT_MAX;
    int temp=*min_element(tcm,tcm+color);
    return temp;
}
int min_cost(int cm[][2],int tcm[][2],int num_house,int colors)
{
   for(int i=0;i<num_house;i++)
   {
       if(i==0)
        {
            for(int j=0;j<colors;j++)
                tcm[i][j]=cm[i][j];
        }
        else
        {
            for(int j=0;j<colors;j++)
            {
                int cost_house=cm[i][j];
                int total_cost=cm[i][j]+min_cost_before_house(tcm[i-1],j);
            }
        }
    }
    int res=*min_element(tcm[num_house-1],tcm[num_house-1]+colors);
    return res;
}
int main()
{
    //N=4,K=2;
    int cm[4][2]={(2,5),(1,6),(2,7),(4,3)};
    int tcm[4][2]={0};
    int rows=sizeof(cm)/sizeof(cm[0]);
    int cols=sizeof(cm[0])/sizeof(cm[0][0]);
    cout<<min_cost(cm,tcm,rows,cols);
    return 0;
}