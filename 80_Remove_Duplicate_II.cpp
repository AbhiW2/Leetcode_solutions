#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {

    int n = nums.size();

    // If array has 2 or fewer elements,
    // all elements can stay.
    if (n <= 2) {
        return n;
    }

    int k = 2;

    for (int i = 2; i < n; i++) {

        // Keep nums[i] if it is different
        // from the element two positions before.
        if (nums[i] != nums[k - 2]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main() {

    vector<int> nums = {1, 1, 1, 2, 2, 3};

    int k = removeDuplicates(nums);

    cout << "k = " << k << endl;

    cout << "Array after removing duplicates: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}