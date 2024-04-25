class Solution {
    int DP[310][310];

public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int c = matrix[0].size();
        int r = matrix.size();
        int ans = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == '1') {
                    DP[i][j] = min(dp(i - 1, j - 1), dp(i, j - 1), dp(i - 1, j)) + 1;
                    ans = max(ans, DP[i][j]);
                } else
                    DP[i][j] = 0;
            }
        }
        return ans * ans;
    }

private:
    int min(int a, int b) { return a < b ? a : b; }
    int min(int a, int b, int c) { return min(c, min(a, b)); }
    int dp(int i, int j) {
        if (i < 0 || j < 0)
            return 0;
        return DP[i][j];
    }
};
