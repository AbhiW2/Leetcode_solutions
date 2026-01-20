#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

// LeetCode Solution Class
class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            // Check for overflow before multiplying by 10
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
                return 0;

            rev = rev * 10 + digit;
        }
        return rev;
    }
};

// Main function for local testing
int main() {
    Solution sol;

    int test1 = 123;
    int test2 = -123;
    int test3 = 1534236469; // This will overflow

    cout << "Reverse of " << test1 << " is " << sol.reverse(test1) << endl;
    cout << "Reverse of " << test2 << " is " << sol.reverse(test2) << endl;
    cout << "Reverse of " << test3 << " is " << sol.reverse(test3) << endl;

    return 0;
}
