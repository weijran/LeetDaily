class Solution {
    int cnt[5010] = {0};
public:
    int hIndex(vector<int>& citations) {
        int i, total;
        for (i=0; i<citations.size(); i++)
            cnt[citations[i]]++;
        for (i = 5000, total = 0; total < i; i--, total += cnt[i]);
        return i;
    }
};
