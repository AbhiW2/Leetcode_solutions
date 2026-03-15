#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    
    stack<char> st;

    for(char c : s) {
        st.push(c);

        if(st.size() >= 3) {
            char c1 = st.top(); st.pop();
            char c2 = st.top(); st.pop();
            char c3 = st.top(); st.pop();

            if(c3 == 'a' && c2 == 'b' && c1 == 'c') {
                // valid "abc", do nothing
            } else {
                st.push(c3);
                st.push(c2);
                st.push(c1);
            }
        }
    }

    return st.empty();
}

int main() {

    string s = "aabcbc";

    if(isValid(s))
        cout<<"Output: " << "true";
    else
        cout << "Output: " << "false";

    return 0;
}