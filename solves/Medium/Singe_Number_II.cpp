class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i =2; i< nums.size(); i+=3){
            if(nums[i-1] != nums[i] || nums[i-2] != nums[i]) return nums[i-2];
        }
        return nums[nums.size()-1];
    }
};
