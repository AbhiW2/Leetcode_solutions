#include <iostream>
#include <vector>
using namespace std;

bool validMountainArray(vector<int>& arr) {
    
    int n = arr.size();
    if (n < 3) return false;

    int i = 0;

    // climb up
    while (i + 1 < n && arr[i] < arr[i + 1]) {
        i++;
    }

    // peak cannot be first or last
    if (i == 0 || i == n - 1) return false;

    // climb down
    while (i + 1 < n && arr[i] > arr[i + 1]) {
        i++;
    }

    return i == n - 1;
}

int main() {

    vector<int> arr = {0,3,2,1};

    if (validMountainArray(arr))
        cout << "true";
    else
        cout << "false";

    return 0;
}