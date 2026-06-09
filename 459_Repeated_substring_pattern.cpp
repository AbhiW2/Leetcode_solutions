#include <iostream>
#include <string>
using namespace std;

bool repeatedSubstringPattern(string s) {
    string temp = s + s;
    temp = temp.substr(1, temp.length() - 2);

    return temp.find(s) != string::npos;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    if (repeatedSubstringPattern(s))
        cout << "true";
    else
        cout << "false";

    return 0;
}