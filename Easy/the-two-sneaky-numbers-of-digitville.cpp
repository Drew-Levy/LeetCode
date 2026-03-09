class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int> seen;
        vector<int> ret;
        for(auto s: nums){
            if(seen.count(s) ==1) ret.push_back(s);
            else seen.insert(s);
        }
        return ret;
    }
};
