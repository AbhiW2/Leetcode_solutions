#include <iostream>
#include <string>
using namespace std;

int repeatedStringMatch(string a, string b) {
    string repeated = a;
    int count = 1;

    while (repeated.length() < b.length()) {
        repeated += a;
        count++;
    }

    if (repeated.find(b) != string::npos)
        return count;

    repeated += a;
    count++;

    if (repeated.find(b) != string::npos)
        return count;

    return -1;
}

int main() {
    string a = "abcd";
    string b = "cdabcdab";

    cout << repeatedStringMatch(a, b);

    return 0;
}