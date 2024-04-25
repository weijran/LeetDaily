class Solution {
    vector<int> ans;
    map<string, int> map1, map2; //map1存单词表中每个单词出现的个数。map2存每个单词到整数的映射。
    int st[5000];
public:
    vector<int> findSubstring(string s, vector<string>& words) 
    {
        int cnt = words.size(), n = s.length(), m = words[0].length(), num = 0;
        for (auto & word : words)
            map1[word]++;

        for (auto &[k,v] : map1)
            map2[k] = num++;

        for (int i=0; i<m; i++)
            s += " ";

        for (int i=0; i<m; i++)
        {
            int pl = i, pr = i;

            while (pr <= n)
            {
                string currWord = s.substr(pr, m);
                if (map1.count(currWord) == 0)
                {
                    if (pr - pl == m * cnt) ans.push_back(pl);
                    while (pl < pr)
                    {
                        st[map2[s.substr(pl, m)]]--;
                        pl += m;
                    }
                    pr += m;
                    pl = pr;
                    continue;
                }

                int currWordIndex = map2[currWord];
                int currWordCnt = map1[currWord];
                if (st[currWordIndex] >= currWordCnt)
                {
                    // 检查是否为答案
                    if (pr - pl == m * cnt) ans.push_back(pl);
                    //pl右移
                    while (st[currWordIndex] >= currWordCnt)
                    {
                        st[map2[s.substr(pl, m)]]--;
                        pl += m;
                    }
                }
                st[currWordIndex]++;
                pr+=m;
            }
        }
        return ans;
    }
};
