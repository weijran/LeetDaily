class Solution {
    unordered_map<string, int> index; // 每个邮箱都有一个唯一编号
    int root[10010];                  // 并查集

    void unionset(int a, int b) {
        int rt1 = findrt(a), rt2 = findrt(b);
        if (rt1 == rt2) return; // 很重要
        root[rt1] += root[rt2];
        root[rt2] = rt1;
    }

    int findrt(int a) {
        if (root[a] < 0) return a;
        return root[a] = findrt(root[a]);
    }

public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        memset(root, -1, sizeof(root));
        // 给出index
        for (int i = 0; i < accounts.size(); i++) {
            for (int j = 1; j < accounts[i].size(); j++) {
                index[accounts[i][j]]++;
            }
        }
        int email_cnt = 0;
        for (auto it = index.begin(); it != index.end(); it++) {
            it->second = email_cnt++;
        }

        // 并
        for (int i = 0; i < accounts.size(); i++) {
            for (int j = 2; j < accounts[i].size(); j++) {
                unionset(index[accounts[i][j - 1]], index[accounts[i][j]]);
            }
        }
        // 查
        unordered_map<int, int> rt_and_ansIndex;
        vector<vector<string>> ans;

        for (int i = 0; i < accounts.size(); i++) {
            int rt_index = findrt(index[accounts[i][1]]);
            if (rt_and_ansIndex.count(rt_index) == 0) {
                rt_and_ansIndex[rt_index] = ans.size();
                ans.push_back(vector<string>());
                ans.back().push_back(accounts[i][0]); // 账户名
            }

            for (int j = 1; j < accounts[i].size(); j++) {
                ans[rt_and_ansIndex[rt_index]].push_back(accounts[i][j]); // 邮箱
            }
        }

        for (int i = 0; i < ans.size(); i++) {
            sort(ans[i].begin() + 1, ans[i].end()); // 排序
            ans[i].erase(unique(ans[i].begin() + 1, ans[i].end()), ans[i].end()); // 去重
        }
        return ans;
    }
};
