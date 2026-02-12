#include<iostream>
#include<vector>
using namespace std;

bool isToplitzMatrix(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();

    for (int i = 1; i < m; i++){
        for(int j = 1; j < n; j++){
            if(matrix[i][j] != matrix[i-1][j-1]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    vector<vector<int>> matrix1 = {
        {1,2,3,4},
        {5,1,2,3},
        {9,5,1,2}
    };

    vector<vector<int>> matrix2 = {
        {1,2},
        {2,2}
    };

    cout << boolalpha;
    cout << isToplitzMatrix(matrix1) << endl;
    cout << isToplitzMatrix(matrix2) << endl; 

    return 0;
}
