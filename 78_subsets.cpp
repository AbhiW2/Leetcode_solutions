#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;

    void backtrack(vector<int>& nums, int index, vector<int>& current) {
        // Store the current subset
        result.push_back(current);

        // Try including each remaining element
        for (int i = index; i < nums.size(); i++) {
            current.push_back(nums[i]);          // Include nums[i]
            backtrack(nums, i + 1, current);     // Recurse
            current.pop_back();                  // Backtrack
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        backtrack(nums, 0, current);
        return result;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3};

    vector<vector<int>> ans = sol.subsets(nums);

    cout << "Subsets are:\n";
    for (const auto& subset : ans) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}