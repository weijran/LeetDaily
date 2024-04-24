class Solution {
    unordered_map<string, int> index; // 每个邮箱都有一个唯一编号
    string emails[10010];
    vector<vector<int>> g; // 图，邻接表存法
    bool visited[10010];
    vector<vector<string>> ans;
    
    void dfs(int n) {
        visited[n] = true;
        ans.back().push_back(emails[n]);
        for (int i = 0; i < g[n].size(); i++) {
            if (!visited[g[n][i]]) {
                dfs(g[n][i]);
            }
        }
        return;
    }

public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        memset(visited, false, sizeof(visited));
        // 给出index
        for (int i = 0; i < accounts.size(); i++) {
            for (int j = 1; j < accounts[i].size(); j++) {
                index[accounts[i][j]]++;
            }
        }
        int email_cnt = 0;
        for (auto it = index.begin(); it != index.end(); it++) {
            it->second = email_cnt++;
            emails[it->second] = it->first;
        }
        g.resize(email_cnt);
        // 建图
        for (int i = 0; i < accounts.size(); i++) {
            for (int j = 2; j < accounts[i].size(); j++) {
                g[index[accounts[i][1]]].push_back(index[accounts[i][j]]);
                g[index[accounts[i][j]]].push_back(index[accounts[i][1]]); //双向边
            }
        }

        // dfs
        for (int i = 0; i < accounts.size(); i++) {
            if (!visited[index[accounts[i][1]]]) {
                ans.push_back(vector<string>());
                ans.back().push_back(accounts[i][0]);
                dfs(index[accounts[i][1]]);
            }
        }

        for (int i = 0; i < ans.size(); i++) {
            sort(ans[i].begin() + 1, ans[i].end()); // 排序
            ans[i].erase(unique(ans[i].begin() + 1, ans[i].end()),
                         ans[i].end()); // 去重
        }
        return ans;
    }
};
