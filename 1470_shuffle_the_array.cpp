#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int>shuffle(vector<int>&nums,int n){
            vector<int>ans(2*n);
            int ans_i=0;
                for(int i=0;i<n;i++){
                    ans[ans_i]=nums[i];
                    ans[ans_i+1]=nums[i+n];
                    ans_i+=2;
                }
                return ans;
        }
};

int main(){
    Solution sol;
        vector<int>nums={2,5,1,3,4,7};
        int n=3;

        vector<int> result = sol.shuffle(nums, n);

        cout<<"Shuffle Array is:";
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;

        return 0;
}