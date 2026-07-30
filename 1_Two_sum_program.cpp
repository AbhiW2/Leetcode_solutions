#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int>TwoSum(vector<int>&nums,int target){
            int sz = nums.size();
            vector<int>ans;

            for(int i = 0; i<sz;i++){
                for(int j=i+1;j<sz;j++){
                    if(nums[i]+nums[j]==target){
                        ans.push_back(i);
                        ans.push_back(j);
                        return ans;
                    }
                }
            }
            return vector<int>{};
        }
};

int main(){
    Solution sol;

    vector<int> nums = {2,7,11,15};
    int target = 17;

    vector<int> result = sol.TwoSum(nums,target);

    if(!result.empty()){
        cout<<"Incides:"<<result[0] <<" " << result[1] << endl;

    }else{
        cout<<"No solution found."<<endl;
    }

    return 0;

}