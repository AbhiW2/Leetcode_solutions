#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

    set<int> s1(nums1.begin(), nums1.end());
    set<int> s2(nums2.begin(), nums2.end());

    vector<int> ans1, ans2;

    for (int x : s1) {
        if (s2.find(x) == s2.end()) {
            ans1.push_back(x);
        }
    }

    for (int x : s2) {
        if (s1.find(x) == s1.end()) {
            ans2.push_back(x);
        }
    }

    return {ans1, ans2};
}

int main() {

    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {2,4,6};

    vector<vector<int>> result = findDifference(nums1, nums2);

    cout << "Output: [";

    cout << "[";
    for (int x : result[0]) {
        cout << x << " ";
    }
    cout << "], [";

    for (int x : result[1]) {
        cout << x << " ";
    }
    cout << "]";

    cout << "]" << endl;

    return 0;
}