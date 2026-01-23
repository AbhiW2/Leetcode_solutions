#include<iostream>
#include<vector>
using namespace std;

vector<int>SmallerNumbersThanCurrent(vector<int>&nums){
    int n = nums.size();
    vector<int>ans(n,0);

    for(int i =0;i<n;i++){
        int count =0;
        for(int j =0 ;j <n;j++){
            if(i!=j && nums[j]<nums[i]){
            count ++;
        }
    }
    ans[i]=count;
  }
  return ans;
};

int main(){
    vector<int> nums = {8,2,6,4,3};

    vector<int>result = SmallerNumbersThanCurrent(nums);

    for(int i = 0;i<result.size();i++){
        cout<< result[i]<<" ";
    }
    return 0;
}