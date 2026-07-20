#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    stack<int> st;
    heights.push_back(0);   // Sentinel value
    int ans = 0;

    for (int i = 0; i < heights.size(); i++) {
        while (!st.empty() && heights[st.top()] > heights[i]) {
            int h = heights[st.top()];
            st.pop();

            int width;
            if (st.empty())
                width = i;
            else
                width = i - st.top() - 1;

            ans = max(ans, h * width);
        }

        st.push(i);
    }

    return ans;
}

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};

    cout << "Largest Rectangle Area = "
         << largestRectangleArea(heights);

    return 0;
}