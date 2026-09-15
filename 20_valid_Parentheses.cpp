#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {

    stack<char> st;

    for (char ch : s) {

        // If opening bracket, push into stack
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }

        // If closing bracket
        else {

            // No opening bracket available
            if (st.empty()) {
                return false;
            }

            char top = st.top();

            // Check matching brackets
            if (ch == ')' && top != '(') {
                return false;
            }

            if (ch == '}' && top != '{') {
                return false;
            }

            if (ch == ']' && top != '[') {
                return false;
            }

            // Matching bracket found
            st.pop();
        }
    }

    // Stack should be empty
    return st.empty();
}

int main() {

    string s = "{[]}";

    if (isValid(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}