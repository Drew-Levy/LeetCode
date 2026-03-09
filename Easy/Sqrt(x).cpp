class Solution {
public:
    int mySqrt(int x) {
        if(x <2) return x;
        int left = 1;
        int right = x >> 1;
        while(left <=right){
            int mid = (left+right) >> 1;
            long square = long(mid)*mid;

            if(square==x) return mid;
            else if(square <x) left=mid+1;
            else right = mid-1;
        }
        return right;
    }
};
