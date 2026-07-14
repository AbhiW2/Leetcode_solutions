#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minValue = INT_MAX;
        int maxDiff = 0;

        for (int i = 0; i < nums.size(); i++) {
            minValue = min(minValue, nums[i]);
            maxDiff = max(maxDiff, nums[i] - minValue);
        }

        return (maxDiff == 0) ? -1 : maxDiff;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {7, 1, 5, 4};

    int ans = obj.maximumDifference(nums);

    cout << "Maximum Difference = " << ans << endl;

    return 0;
}