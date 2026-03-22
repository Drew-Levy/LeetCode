class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int val=0;
        for(auto s: operations){
            if(s.find("-") != string::npos) --val;
            else ++val;
        }
        return val;
    }
};
