#include<iostream>
#include<vector>
using namespace std;

bool canPLaceFlowers(vector<int>&flowerbed,int n){
    int size = flowerbed.size();

    for(int i =  0 ;i<size;i++){
        if(flowerbed[i]==0){
            bool leftempty = (i==0) || (flowerbed[i-1]==0);
            bool rightempty = (i==size-1) || (flowerbed[i+1]);

            if(leftempty && rightempty){
                flowerbed[i]=1;
                n--;
                if(n==0)return true;
            }
        }

    }
    return n<=0;
};

int main(){

    cout<<boolalpha;
    vector<int> flowerbed1 ={1,0,0,0,1};
    int n1=1;

    vector<int>flowerbed2 = {1,0,0,0,1};
    int n2 = 2;

    cout<<canPLaceFlowers(flowerbed1,n1)<<endl;
    cout<<canPLaceFlowers(flowerbed2,n2)<<endl;

    return 0;

}