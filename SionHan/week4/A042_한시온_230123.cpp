
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        const char bs = '#';
        
        for (auto iter = s.begin(); iter != s.end();) {
            if (*iter == bs) {
                iter = (iter == s.begin())
                        ? s.erase(s.begin())
                        : s.erase(iter-1, iter+1);
            } else {
                iter += 1;
            }
        }
        
        for (auto iter = t.begin(); iter != t.end();) {
            if (*iter == bs) {
                iter = (iter == t.begin())
                        ? t.erase(t.begin())
                        : t.erase(iter-1, iter+1);
            } else {
                iter += 1;
            }
        }
        return s == t;
    }
};