class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int window=0;
       int max_window=0;
       for(int i=0; i< nums.size(); ++i){
        if(nums[i] ==1){
            ++window;
            max_window = max(max_window, window);
       } 
       if(nums[i] ==0) window=0;
    }
    return max_window;
    }
};
