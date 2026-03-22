class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int pos =k;
        for(int i =0; i<nums.size(); ++i){
            if(nums[i] == 1){
                if(pos <k) return false;
                pos =0;
            } else ++pos;
        }
        return true;
    }
};
