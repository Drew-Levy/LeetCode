class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int r = nums.size()-1;
        int prod = 0,  l = 0;
        int math;
        while(l<r){
            math = (nums[l]-1) * (nums[r]-1);
            if(math > prod) prod = math;
            if(nums[l]>=nums[r]) --r;
            else ++l;
        }
        return prod;
    }
};
