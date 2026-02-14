#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>&mat,int r,int c){
    int m=mat.size();
    int n = mat[0].size();

    if(m*n != r*c){
        return mat;
    }

    vector<vector<int>> result(r,vector<int>(c));

    int row=0;
    int col=0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            result[row][col] = mat[i][j];
            col++;

            if(col == c){
                col=0;
                row++;
            }
        }
    }
    return result;
}


int main(){
    vector<vector<int>> mat = {
        {1,2},
        {3,4}
    };

    int r = 1;
    int c = 4;

    vector<vector<int>> reshapedMatrix = matrixReshape(mat,r,c);

    for(const auto& row:reshapedMatrix){
        for(int val:row){
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}