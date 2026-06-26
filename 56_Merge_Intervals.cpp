#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {

    // Step 1: Sort intervals based on start time
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;

    // Step 2: Add the first interval
    ans.push_back(intervals[0]);

    // Step 3: Traverse remaining intervals
    for (int i = 1; i < intervals.size(); i++) {

        // Check if current interval overlaps with last merged interval
        if (intervals[i][0] <= ans.back()[1]) {

            // Merge intervals
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);

        } else {

            // No overlap, add new interval
            ans.push_back(intervals[i]);
        }
    }

    return ans;
}

int main() {

    vector<vector<int>> intervals = {
        {1,3},
        {2,6},
        {8,10},
        {15,18}
    };

    vector<vector<int>> result = mergeIntervals(intervals);

    cout << "Merged Intervals:" << endl;

    for (auto interval : result) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }

    return 0;
}