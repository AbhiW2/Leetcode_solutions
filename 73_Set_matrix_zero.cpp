#include<iostream>
#include<vector>
using namespace std;

void setZeroes(vector<vector<int>>&matrix){
    int m = matrix.size();
    int n =  matrix[0].size();

    vector<bool>rows(m,false);
    vector<bool>cols(n,false);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                rows[i]=true;
                cols[j]=true;
            }
        }
    }
    for(int i=0;i<m;i++){
        if(rows[i]){
            for(int j=0;j<n;j++){
                matrix[i][j]=0;
            }
        }
    }
    for(int j=0;j<n;j++){
        if(cols[j]){
            for(int i=0;i<n;i++){
                matrix[i][j]=0;
            }
        }
    }
};

int main(){
    int m,n;
        cout<<"Enter rows and cols:";
        cin>>m>>n;

        vector<vector<int>>matrix(m,vector<int>(n));

        cout<<"Enter Matrix element:"<<endl;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>matrix[i][j];
            }
        }
        setZeroes(matrix);

        cout<<"\n Matrix after making zeroes:"<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
