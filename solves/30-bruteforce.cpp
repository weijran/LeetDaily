struct p {
    int total, res;
};
class Solution {
    vector<int> ans;
    map<string, p> mymap;
    int n; //字符串s长度
    int cnt; //单词个数
    int m; //每个单词的长度
public:
    vector<int> findSubstring(string s, vector<string>& words) 
    {
        cnt = words.size();
        n = s.length();
        m = words[0].length();
        for (auto & word : words)
            mymap[word].total++;

        for (int i=0; i<n; i++)
        {
            for (auto &[k,v] : mymap)
                v.res = v.total;

            int j;
            for (j = i; j<i+cnt*m; j+=m )
            {
                string tmpword = s.substr(j, m);
                if (mymap[tmpword].res > 0)
                    mymap[tmpword].res--;
                else
                    break;
            }
            if (j == i+cnt * m)
                ans.push_back(i);
            
        }
        return ans;
    }
};
