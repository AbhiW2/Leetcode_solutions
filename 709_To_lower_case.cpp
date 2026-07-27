#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for (char &c : s) {
            if (c >= 'A' && c <= 'Z') {
                c = c + ('a' - 'A');
            }
        }
        return s;
    }
};

int main() {
    Solution obj;

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Lowercase string: " << obj.toLowerCase(s) << endl;

    return 0;
}