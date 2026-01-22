/*Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).*/
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int>getConcatenation(vector<int>&nums){
            int n = nums.size();
            vector<int>ans(2*n);

            for(int i=0;i<n;i++){
                ans[i]=nums[i];
                ans[i+n]=nums[i];
            }
                return ans;
        }
};
    int main(){
        Solution sol;
        vector<int> nums = {1,2,1};
        vector<int> result = sol.getConcatenation(nums);

    cout << "Concatenated array: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
    