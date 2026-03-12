class Solution {
public:
    string toLowerCase(string s) {
        string ret;
        int dif = abs('a' - 'A');
        for(auto c: s){
            if(c >='A' && c<='Z') c+=dif;
            ret.push_back(c);
        }
        return ret;
    }
};
