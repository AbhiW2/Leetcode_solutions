#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();

        if (n == 0)
            return 0;

        int left = 0;
        int right = n - 1;

        int left_max = height[left];
        int right_max = height[right];

        int water = 0;

        while (left < right) {

            if (left_max < right_max) {

                left++;

                left_max = max(left_max, height[left]);

                water += left_max - height[left];

            } else {

                right--;

                right_max = max(right_max, height[right]);

                water += right_max - height[right];
            }
        }

        return water;
    }
};

int main() {

    vector<int> height = {4, 2, 0, 3, 2, 5};

    Solution obj;

    cout << "Total Trapped Water = " << obj.trap(height) << endl;

    return 0;
}