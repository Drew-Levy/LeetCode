class Solution {
public:
    int hammingWeight(int n) {
        //return bitset<32<(n).count();
        int count =0;
        while(n){
            count+=n&1;
            n >>=1;
        }
        return count;
    }
};
