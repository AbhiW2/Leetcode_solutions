#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {

    // Assume first string is the common prefix
    string prefix = strs[0];

    // Compare with remaining strings
    for (int i = 1; i < strs.size(); i++) {

        int j = 0;

        // Compare characters
        while (j < prefix.length() &&
               j < strs[i].length() &&
               prefix[j] == strs[i][j]) {

            j++;
        }

        // Keep only the common prefix
        prefix = prefix.substr(0, j);

        // If no common prefix exists
        if (prefix.empty())
            return "";
    }

    return prefix;
}

int main() {

    vector<string> strs = {"flower", "flow", "flight"};

    string ans = longestCommonPrefix(strs);

    cout << "Longest Common Prefix: " << ans << endl;

    return 0;
}