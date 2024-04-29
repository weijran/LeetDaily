class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> p;
        p.push_back(nums[0]);
        for (int i=1; i<nums.size(); i++)
        {
            if (nums[i] > p.back())
                p.push_back(nums[i]);
            else
                *lower_bound(p.begin(), p.end(), nums[i]) = nums[i];
        }
        return p.size();
    }
};
