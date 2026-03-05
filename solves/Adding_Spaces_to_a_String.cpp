class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.size(), m = spaces.size();
        string t;
        t.reserve(n+m);
        int j=0;
        for(int i=0; i<n; ++i){
            if(j<m && spaces[j]==i){
                t.push_back(' ');
                ++j;
            }
            t.push_back(s[i]);
        }
        return t;
    }
};
