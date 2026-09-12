#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();

    // Step 1: Find the pivot
    int i = n - 2;

    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    // Step 2: Find the element just greater than pivot
    if (i >= 0) {
        int j = n - 1;

        while (nums[j] <= nums[i]) {
            j--;
        }

        swap(nums[i], nums[j]);
    }

    // Step 3: Reverse the elements after pivot
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {

    vector<int> nums = {1, 2, 4, 3};

    cout << "Original array: ";

    for (int x : nums) {
        cout << x << " ";
    }

    cout << endl;

    nextPermutation(nums);

    cout << "Next permutation: ";

    for (int x : nums) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}