class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ret;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 1; i<n; i+=2){
            ret.push_back(nums[i]);
            ret.push_back(nums[i-1]);
        }
        return ret;
    }
};
