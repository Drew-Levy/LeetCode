class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector <vector<int>> ret;
        sort(nums.begin(), nums.end());

        for(int i =0; i< nums.size(); ++i){
            if(i >0 && nums[i] == nums[i-1]) continue;

            int left = i+1, right = nums.size()-1;

            while(left<right){
                int threeSum = nums[i]+nums[left]+nums[right];
                if(threeSum> 0) --right;
                else if(threeSum < 0) ++left;
                else{
                    ret.push_back({nums[i], nums[left], nums[right]});
                    ++left;
                    while(nums[left] == nums[left-1] && left<right){
                        ++left;
                    }
                }
            }
        }
        return ret;
    }
};
