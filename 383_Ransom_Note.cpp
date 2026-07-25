#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {

    vector<int> freq(26, 0);

    // Count characters in magazine
    for (char ch : magazine) {
        freq[ch - 'a']++;
    }

    // Check if ransomNote can be constructed
    for (char ch : ransomNote) {

        if (freq[ch - 'a'] == 0)
            return false;

        freq[ch - 'a']--;
    }

    return true;
}

int main() {

    string ransomNote = "aa";
    string magazine = "aab";

    if (canConstruct(ransomNote, magazine))
        cout << "true";
    else
        cout << "false";

    return 0;
}