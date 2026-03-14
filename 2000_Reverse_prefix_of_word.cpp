#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reversePrefix(string word, char ch) {
    
    int index = -1;

    // find first occurrence of ch
    for(int i = 0; i < word.length(); i++) {
        if(word[i] == ch) {
            index = i;
            break;
        }
    }

    // if found, reverse from 0 to index
    if(index != -1) {
        reverse(word.begin(), word.begin() + index + 1);
    }

    return word;
}

int main() {

    string word = "abcdefd";
    char ch = 'd';

    string result = reversePrefix(word, ch);

    cout<<"Output: "<< result << endl;

    return 0;
}