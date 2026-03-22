class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> counts;
        for(int num: nums){
            ++counts[num];
        }
        for(auto num: counts){
            if(num.second > n/2) return num.first;
        }
        return -1;
    }
};
