#include<iostream>
#include<vector>
using namespace std;
class Store
{
    private:
        int N;
        int count;
        vector<string> lastids;
    public:
    Store(int size)
    {
        this->N=size;
        count=0;
        lastids=vector<string>(N,"");
    }
    void Record(string r)
    {
        lastids[count]=r;
        count=(count+1)%N;
    }
    string get_last(int ind)
    {
        ind=(count-ind+N)%N;
        return lastids[ind];
    }
};
int main()
{
    Store data=Store(5);
    int t;
    cin>>t;
    while(t--)
    {
        string rec;
        cin>>rec;
        if(rec=="<<")
        {
            int in;
            cin>>in;
            cout<<data.get_last(in)<<endl;
            continue;
        }
        data.Record(rec);
    }
    return 0;
}