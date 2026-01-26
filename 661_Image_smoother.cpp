#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<vector<int>> imageSmoother(vector<vector<int>>img){
            int m =img.size();
            int n = img[0].size();

            vector<vector<int>> result(m,vector<int>(n,0));

            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){

                    int sum=0;
                    int count=0;

                    for(int x=-1;x<=1;x++){
                        for(int y=-1;y<=1;y++){
                            int ni=i+x;
                            int nj=j+y;

                            if(ni>=0 && ni<m && nj>=0 && nj<n){
                                sum+=img[ni][nj];
                                count++;
                            }

                        }
                    }
                    result[i][j]=sum/count;
                }
            }
            return result;

        }
};

int main(){
    Solution sol;
        vector<vector<int>>img={
            {100,200,100},
            {200,50,200},
            {100,200,100}
        };

        vector<vector<int>> output = sol.imageSmoother(img);

        cout<<"Smoothes Image:"<<endl;
        for(auto&row:output){
            for(int val:row){
                cout<<val<< " ";
            }
            cout<<endl;
        }
        return 0;
}