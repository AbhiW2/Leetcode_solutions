#include<iostream>
#include<vector>
using namespace std;

int remove_elements(vector<int>&nums,int val){
    int n = nums.size();
    int k =0;

    for(int i=0;i<n;i++){
        if(nums[i]!=val){
            nums[k]=nums[i];
            k++;
        }

    }
    return k;

}


int main()
{
    vector<int> nums ={2,3,4,3,4,5,6};
    int val =3;

    int k = remove_elements(nums,val);

    cout<<" k = " << k << endl;

    for(int i=0;i<k;i++){
        cout<< nums[i] << " ";
    }
    cout<< endl;
return 0;
}