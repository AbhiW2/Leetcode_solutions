#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;

    for (string str : strs) {
        string key = str;
        sort(key.begin(), key.end());   // Sort characters

        mp[key].push_back(str);
    }

    vector<vector<string>> result;

    for (auto& pair : mp) {
        result.push_back(pair.second);
    }

    return result;
}

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> result = groupAnagrams(strs);

    cout << "Grouped Anagrams:\n";

    for (auto& group : result) {
        cout << "[ ";
        for (auto& word : group) {
            cout << word << " ";
        }
        cout << "]\n";
    }

    return 0;
}
