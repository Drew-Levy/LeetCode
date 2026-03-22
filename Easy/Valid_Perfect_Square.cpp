class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int left=1;
        int right=num/2;
        while(left<=right){
            long long mid = left + (right-left)/2;
            long long  calc = mid*mid;
            if(calc==num) return true;
            else if(calc <num) left = mid+1;
            else right = mid-1;
        }
        return false;
    }
};
