class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ret(temperatures.size(), 0);
        stack<int> st;

        for(int i =0; i<temperatures.size(); ++i){
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                int val = st.top();
                st.pop();
                ret[val] = i-val;
            }
            st.push(i);
        }
        return ret;
    }
};
