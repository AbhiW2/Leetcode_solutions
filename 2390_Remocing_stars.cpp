#include <iostream>
#include <string>
using namespace std;

string removeStars(string s) {
    
    string result = "";

    for(char c : s) {
        if(c == '*') {
            result.pop_back();   // remove last character
        }
        else {
            result.push_back(c); // add character
        }
    }

    return result;
}

int main() {

    string s = "leet**cod*e";

    cout <<"Final String:"<< removeStars(s) << endl;

    return 0;
}