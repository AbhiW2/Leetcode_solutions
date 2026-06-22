#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class MedianFinder {
private:
    priority_queue<int> left; // Max Heap
    priority_queue<int, vector<int>, greater<int>> right; // Min Heap

public:
    MedianFinder() {}

    void addNum(int num) {
        // Add to max heap
        left.push(num);

        // Move largest element from left to right
        right.push(left.top());
        left.pop();

        // Balance heaps
        if (right.size() > left.size()) {
            left.push(right.top());
            right.pop();
        }
    }

    double findMedian() {
        if (left.size() > right.size()) {
            return left.top();
        }

        return (left.top() + right.top()) / 2.0;
    }
};

int main() {
    MedianFinder mf;

    mf.addNum(1);
    mf.addNum(2);

    cout << "Median: " << mf.findMedian() << endl; // 1.5

    mf.addNum(3);

    cout << "Median: " << mf.findMedian() << endl; // 2.0

    return 0;
}