/*You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        sort(nums.begin(), nums.end());

        int sum = 0;
        int duplicate = 0;

        for (int i = 0; i < n - 1; i++) {
            sum += nums[i];
            if (nums[i] == nums[i + 1]) {
                duplicate = nums[i];
            }
        }
        sum += nums[n - 1];

        int total = n * (n + 1) / 2;
        int missing = total - (sum - duplicate);

        ans.push_back(duplicate);
        ans.push_back(missing);

        return ans;
    }
};

int main() {
    Solution s;

    vector<int> nums1 = {1, 2, 2, 4};
    vector<int> nums2 = {1, 1};

    vector<int> res1 = s.findErrorNums(nums1);
    vector<int> res2 = s.findErrorNums(nums2);

    cout << "Output 1: [" << res1[0] << ", " << res1[1] << "]" << endl;
    cout << "Output 2: [" << res2[0] << ", " << res2[1] << "]" << endl;

    return 0;
}
