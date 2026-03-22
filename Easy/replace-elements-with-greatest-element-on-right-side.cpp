class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ret(arr.size(), -1);
        int max = -1;
        for(int i = arr.size()-1; i>=0; --i){
            ret[i] = max;
            if(arr[i] > max) max = arr[i];
        }
        return ret;
    }
};
