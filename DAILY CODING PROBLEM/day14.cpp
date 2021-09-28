#include<iostream>
#include<iomanip>
using namespace std;
#define INTERVAL 3500
int main()
{
    double rand_x,rand_y,origin_dist,pi;
    int circle_points=0,sqaure_points=0;
    srand(time(NULL));
    for(int i=0;i<INTERVAL;i++)
    {
        rand_x=double(rand()%(INTERVAL+1))/INTERVAL;
        rand_y=double(rand()%(INTERVAL+1))/INTERVAL;
        origin_dist=rand_x*rand_x+rand_y*rand_y;
        if(origin_dist<=1)
            circle_points++;
        sqaure_points++;
        pi=double(4*circle_points)/sqaure_points;
        
    }
    cout<<setprecision(4)<<pi;
    return 0;
}