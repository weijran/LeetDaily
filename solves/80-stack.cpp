class Solution {
    stack<int> s;
    int shorterL[100010], shorterR[100010], ans = 0;
    int max(int a, int b) { return a < b ? b : a; }

public:
    int largestRectangleArea(vector<int>& heights) {
        // 找到每个柱子左边第一个比它矮的下标（从右至左、单调递增栈）
        for (int i = heights.size()-1; i >=0 ; i--) {
            while (!s.empty() && heights[s.top()] > heights[i])
            {
                shorterL[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while (!s.empty())
        {
            shorterL[s.top()] = -1;
            s.pop();
        }
        // 找到每个柱子右边第一个比它矮的下标（从左至右、单调递增栈）

        for (int i = 0; i < heights.size(); i++) {
            while (!s.empty() && heights[s.top()] > heights[i])
            {
                shorterR[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while (!s.empty())
        {
            shorterR[s.top()] = heights.size();
            s.pop();
        }

        for (int i = 0; i < heights.size(); i++)
            ans = max(ans, heights[i] * (shorterR[i] - shorterL[i] - 1));
        return ans;
    }
};
