/*Given a binary array nums, return the maximum number of consecutive 1's in the array.*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currentCount = 0;

        for (int num : nums) {
            if (num == 1) {
                currentCount++;
                maxCount = max(maxCount, currentCount);
            } else {
                currentCount = 0;
            }
        }
        return maxCount;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 1, 0, 1, 1, 1};
    vector<int> nums2 = {1, 0, 1, 1, 0, 1};

    cout << "Output nums 1: " << sol.findMaxConsecutiveOnes(nums1) << endl;
    cout << "Output nums 2: " << sol.findMaxConsecutiveOnes(nums2) << endl;

    return 0;
}
