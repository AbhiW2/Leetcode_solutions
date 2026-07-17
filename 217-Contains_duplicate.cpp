#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;

            if (freq[num] > 1) {
                return true;
            }
        }

        return false;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {1, 2, 3, 1};

    if (obj.containsDuplicate(nums))
        cout << "Duplicate Found" << endl;
    else
        cout << "No Duplicate Found" << endl;

    return 0;
}