class Solution {
    stack<int> s;
    int shorterL[100010], shorterR[100010], ans = 0;
    int max(int a, int b) { return a < b ? b : a; }

public:
    int largestRectangleArea(vector<int>& heights) {

        // 从左至右、单调递增栈
        for (int i = 0; i < heights.size(); i++) {
            while (!s.empty() && heights[s.top()] > heights[i]) {
                shorterR[s.top()] = i; // 栈中的元素被迫出栈时，意味着遇到了右侧第一个比它矮的
                s.pop();
            }
            if (s.empty())
                shorterL[i] = -1;
            else
                shorterL[i] = s.top(); // 一个元素入栈前的栈顶元素，代表左侧第一个比它矮的
                
            s.push(i);
        }
        while (!s.empty()) {
            shorterR[s.top()] = heights.size();
            s.pop();
        }

        for (int i = 0; i < heights.size(); i++)
            ans = max(ans, heights[i] * (shorterR[i] - shorterL[i] - 1));
        return ans;
    }
};
