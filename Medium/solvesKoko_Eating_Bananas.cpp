class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=0;
        for(int i =0; i< piles.size(); ++i){
            right = max(right, piles[i]);
        }
        int ret = right;

        while(left <= right){
            int k = (left+right)/2;
            long long hours = 0;
            for(int p: piles){
                hours+= ((long long) p+k-1)/k;
            }

            if(hours<=h){
                ret = min(ret, k);
                right = k-1;
            } else{
                left = k+1;
            }
        }
        return ret;
    }
};
