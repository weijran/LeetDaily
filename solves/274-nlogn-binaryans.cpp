class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        sort(citations.begin(), citations.end());
        int lo = 0, hi = 1000, mi, ans;
        // 二分答案
        while (lo < hi) {
            mi = (lo + hi) / 2; // 潜在的答案
            int cnt = citations.end() - lower_bound(citations.begin(), citations.end(), mi);

            if (cnt >= mi)
                ans = mi, lo = mi + 1;
            else
                hi = mi;
        }
        return ans;
    }
};
