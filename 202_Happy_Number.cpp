#include <iostream>
using namespace std;

class Solution {
public:
    int getNext(int n) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = getNext(n);

        while (fast != 1 && slow != fast) {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }

        return fast == 1;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (obj.isHappy(n)) {
        cout << n << " is a Happy Number" << endl;
    } else {
        cout << n << " is not a Happy Number" << endl;
    }

    return 0;
}