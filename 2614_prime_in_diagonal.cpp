#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPrime(int x) {
        if (x <= 1) return false;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) return false;
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (isPrime(nums[i][i]))
                ans = max(ans, nums[i][i]);

            if (isPrime(nums[i][n - i - 1]))
                ans = max(ans, nums[i][n - i - 1]);
        }

        return ans;
    }
};

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<vector<int>> nums(n, vector<int>(n));

    cout << "Enter matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> nums[i][j];

    Solution obj;
    cout << "Largest Prime: \n" << obj.diagonalPrime(nums);

    return 0;
}
