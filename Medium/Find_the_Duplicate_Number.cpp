class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        /*unordered_set<int> s;
        for(int i=0; i<nums.size(); ++i){
            if(s.count(nums[i])) return nums[i];
            else s.insert(nums[i]);
        }
        return -1;*/

        int slow = nums[0];
        int fast = nums[0];

        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow==fast) break;
        }

        int slow2 = nums[0];
        while(slow!=slow2){
            slow = nums[slow];
            slow2 = nums[slow2];
        }
        return slow;
    }
};
