#include<iostream>
#include<vector>

using namespace std;

int duplicate(vector<int>nums)
{
    while(nums[0]!=nums[nums[0]])
        swap(nums[0],nums[nums[0]]);
    return nums[0];
}

int main()
{
    vector<int> nums{1,2,5,4,3,3};
    cout<<duplicate(nums);
}