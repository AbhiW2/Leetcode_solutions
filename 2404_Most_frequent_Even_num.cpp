#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

        unordered_map<int, int> freq;

        // Count frequency of even numbers
        for (int num : nums) {
            if (num % 2 == 0) {
                freq[num]++;
            }
        }

        int ans = -1;
        int maxFreq = 0;

        // Find the most frequent even number
        for (auto it : freq) {
            if (it.second > maxFreq) {
                maxFreq = it.second;
                ans = it.first;
            }
            else if (it.second == maxFreq && it.first < ans) {
                ans = it.first;
            }
        }

        return ans;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {0, 1, 2, 2, 4, 4, 1};

    int result = obj.mostFrequentEven(nums);

    cout << "Most Frequent Even Element: " << result << endl;

    return 0;
}