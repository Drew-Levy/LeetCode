class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0, balance=0;
        for(char c: s){
            if(c=='L') ++balance;
            else --balance;
            if(!balance) ++count;
        }
        return count;
    }
};
