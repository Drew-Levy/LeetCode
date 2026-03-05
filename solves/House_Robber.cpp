class Solution {
public:
    int rob(vector<int>& nums) {
       if(nums.size() ==1) return nums[0];
       vector<int> profits(nums.size(), 0);
       profits[0] = nums[0];
       profits[1] = max(nums[0], nums[1]);

       for(int i=2; i< nums.size(); ++i){
        profits[i] = max(profits[i-1], profits[i-2] +nums[i]);
       }
       return profits[nums.size()-1];
    
    }
};

