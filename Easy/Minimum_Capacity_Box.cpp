class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int min=-1;
        int best_fit=INT_MAX;
        for(int i=0; i< capacity.size(); ++i){
            int cap = capacity[i]-itemSize;
            if(cap < best_fit && cap >=0){
                best_fit = cap;
                min = i;
            }
        }
        return min;
    }
};
