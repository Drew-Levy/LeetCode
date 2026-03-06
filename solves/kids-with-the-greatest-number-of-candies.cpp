class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies =0;
        for(auto c: candies){
            maxCandies = max(maxCandies, c);
        }

        vector<bool> ret;
        for(auto r: candies){
            ret.push_back(r+extraCandies >= maxCandies);
        }
        return ret;
    }
};
