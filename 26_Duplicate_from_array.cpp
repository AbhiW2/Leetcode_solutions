#include <iostream>
#include <vector>
using namespace std;

    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) return 0;

        int i = 1; 

        for (int j = 1; j < n; j++) {
            if (nums[j] != nums[i - 1]) {
                nums[i] = nums[j];
                i++;
            }
        }

        return i;
    };
    

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};

    int newLength = removeDuplicates(nums);

    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
