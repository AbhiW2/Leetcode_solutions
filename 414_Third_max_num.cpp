#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

class Solution {
    public:
    int thirdMax(vector<int>&nums){
        int n = nums.size();
        int max = INT_MIN, sec_max = INT_MIN, third_max= INT_MIN;

        for (int i = 0; i < n; i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] != max && nums[i] > sec_max) {
                sec_max = nums[i];
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] != max &&
                nums[i] != sec_max &&
                nums[i] > third_max) {

                third_max = nums[i];
            }
        }

        if (third_max == LONG_MIN)
            return max;

        return third_max;
    }
};


int main(){
    vector<int> nums = {3, 2, 5,3,1};
    Solution obj;
    cout << "Third Maximum Number = " << obj.thirdMax(nums) << endl;
    return 0;
}