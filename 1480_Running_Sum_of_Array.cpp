#include<iostream>
#include<vector>
using namespace std;

vector<int> runningsum(vector<int>&nums)
{
    int n=nums.size();
    vector<int> result(n);

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=nums[i];
        result[i]=sum;
    }
    return result;
}

int main()
{
    vector<int> nums={1,2,3,20,5};
    vector<int> result=runningsum(nums);

    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}