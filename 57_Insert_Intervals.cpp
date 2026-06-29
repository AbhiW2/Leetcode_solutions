#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

    vector<vector<int>> ans;

    int i = 0;
    int n = intervals.size();

    // Step 1: Add all intervals before newInterval
    while (i < n && intervals[i][1] < newInterval[0]) {
        ans.push_back(intervals[i]);
        i++;
    }

    // Step 2: Merge overlapping intervals
    while (i < n && intervals[i][0] <= newInterval[1]) {

        newInterval[0] = min(newInterval[0], intervals[i][0]);
        newInterval[1] = max(newInterval[1], intervals[i][1]);

        i++;
    }

    // Step 3: Add merged interval
    ans.push_back(newInterval);

    // Step 4: Add remaining intervals
    while (i < n) {
        ans.push_back(intervals[i]);
        i++;
    }

    return ans;
}

int main() {

    vector<vector<int>> intervals = {
        {1,2},
        {3,5},
        {6,7},
        {8,10},
        {12,16}
    };

    vector<int> newInterval = {4,8};

    vector<vector<int>> ans = insert(intervals, newInterval);

    cout << "Merged Intervals:\n";

    for (auto interval : ans) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }

    return 0;
}