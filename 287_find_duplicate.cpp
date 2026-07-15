#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findDuplicate(vector<int>& nums) {

    unordered_map<int, int> mp;

    for (int num : nums) {
        mp[num]++;

        if (mp[num] > 1) {
            return num;
        }
    }

    return -1;
}

int main() {

    vector<int> nums = {1, 3, 4, 2, 2};

    int duplicate = findDuplicate(nums);

    cout << "Duplicate Element: " << duplicate << endl;

    return 0;
}