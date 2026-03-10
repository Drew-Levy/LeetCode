class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto n: matrix){
            int r = n.size()-1;
            if(n[r] < target) continue;
            int l=0;

            while(l<=r){
                int mid = (l+r)/2;
                if(n[mid] < target) l=mid+1;
                else if(n[mid] > target) r=mid-1;
                else return true;
            }
        }
        return false;
    }
};
