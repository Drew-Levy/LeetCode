class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i =1; i<=n; ++i){
            ans[i] = numBits(i);
        }
        return ans;

    }

    int numBits(int n){
        int count=0;
        while(n){
            count+=n&1;
            n >>=1;
        }
        return count;
    }

};
