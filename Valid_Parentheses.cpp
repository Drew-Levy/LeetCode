class Solution {
public:
    bool isValid(string s) {
        stack<char> ret;

        for(char c: s){
            if(!ret.empty()){
                char prev = ret.top();
                if (validChar(prev, c)){
                    ret.pop();
                    continue;
                }
            }
            ret.push(c);
        }
        return ret.empty();
    }
    bool validChar(char prev, char curr){
        return (prev=='(' && curr==')' || prev == '{' && curr == '}' || prev=='[' && curr == ']');
    }
};
