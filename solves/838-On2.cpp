class Solution {
    string state[2];
    int c = 0;
    string ans;
public:
    Solution() {
        state[0].resize(100001, ' ');
        state[1].resize(100001, ' ');
    }
    string pushDominoes(string dominoes) {

        int n = dominoes.length();
        bool finish = false; // finish代表还有力的存在

        for (int i = 0; i < n; i++)
            state[0][i + 1] = dominoes[i];

        state[0][0] = state[0][n + 1] = state[1][0] = state[1][n + 1] = '.';

        while (!finish) {
            finish = true;
            for (int i = 1; i <= n; i++)
                state[c ^ 1][i] = state[c][i];

            for (int i = 1; i <= n; i++) {
                if (state[c][i] == '.') {
                  
                    if (state[c][i - 1] == 'R' && state[c][i + 1] == 'L') {
                        state[c ^ 1][i - 1] = 'r';
                        state[c ^ 1][i + 1] = 'l';

                    } else if (state[c][i - 1] == 'R') {
                        state[c ^ 1][i - 1] = 'r';
                        state[c ^ 1][i] = 'R';

                    } else if (state[c][i + 1] == 'L') {
                        state[c ^ 1][i + 1] = 'l';
                        state[c ^ 1][i] = 'L';
                    }
                  
                    if (state[c ^ 1][i - 1] != state[c][i - 1] || state[c ^ 1][i + 1] != state[c][i + 1])
                        finish = false;
                }
            }
            c = 1 ^ c;
        }
        
        for (int i = 1; i <= n; i++) 
            ans += f(state[c][i]); // 如果l和r是小写的，转化为大写
        
        return ans;
    }

    char f(char c) {
        if (c == 'l')
            return 'L';
        if (c == 'r')
            return 'R';
        return c;
    }
};
