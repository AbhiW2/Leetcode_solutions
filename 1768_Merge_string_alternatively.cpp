#include<iostream>
using namespace std;

string mergeAlternately(string word1, string word2){
    string result = "";
    int i = 0;

    while(i<word1.length() || i< word2.length()){
        if(i<word1.length()){
            result+=word1[i];
        }
        if(i<word2.length()){
            result+=word2[i];
        }
        i++;
    }
    return result;
}

int main(){
    cout<<"Output 1:"<<mergeAlternately("abc","pqr")<<endl;
    cout<<"Output 2:"<<mergeAlternately("ab","pqrs")<<endl;
    cout<<"output 3:"<<mergeAlternately("abcd","pq")<<endl;

    return 0;

}