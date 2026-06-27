#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int num : nums) {
            actualSum += num;
        }

        return expectedSum - actualSum;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {3, 0, 1};

    cout << "Missing Number = " << obj.missingNumber(nums);

    return 0;
}