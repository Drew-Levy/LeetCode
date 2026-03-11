class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0], nums[1]);
        int n = nums.size();
        return max(og_rob(nums, 0, n-2), og_rob(nums, 1, n-1));
    }

    int og_rob(vector<int>& nums, int l, int r){
        int n = r-l+1;
        vector<int> dp(n, 0);
        dp[0] = nums[l];
        dp[1] = max(nums[l], nums[l+1]);
        for(int i =2; i< n; ++i){
            dp[i] = max(dp[i-1], dp[i-2]+nums[l+i]);
        }
        return dp[r-l];
    }
};

