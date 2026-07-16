#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {

    deque<int> dq;          // Stores indices
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {

        // Remove indices that are outside the current window
        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        // Remove all smaller elements from the back
        while (!dq.empty() && nums[dq.back()] < nums[i])
            dq.pop_back();

        // Add current index
        dq.push_back(i);

        // Store the maximum when the first window is complete
        if (i >= k - 1)
            ans.push_back(nums[dq.front()]);
    }

    return ans;
}

int main() {

    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = maxSlidingWindow(nums, k);

    cout << "Sliding Window Maximum: ";

    for (int x : result)
        cout << x << " ";

    cout << endl;

    return 0;
}