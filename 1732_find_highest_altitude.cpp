#include<iostream>
#include<vector>
using namespace std;

int largestAltitude(vector<int>&gain){
    int currentAltitude=0;
    int maxAltitude=0;

    for(int i=0;i<gain.size();i++){
        currentAltitude+=gain[i];
        maxAltitude = max(maxAltitude,currentAltitude);
    }
    return maxAltitude;
}

int main(){
    vector<int> gain1 = {-5,1,5,0,-7};
    vector<int> gain2 = {-4,-3,-2,-1,4,3,2};

    cout<<"Highest Altitude for gain1:"<<largestAltitude(gain1)<<endl;
    cout<<"Heighest Altitude for gain2:"<<largestAltitude(gain2)<<endl;


    return 0;
}