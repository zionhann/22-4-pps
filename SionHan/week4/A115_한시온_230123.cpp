

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        const string form = "balloon";
        int ans = 0;
        
        while (true) {
            for (char el : form) {
                size_t pos = text.find(el);
                
                if (pos == string::npos) {
                    return ans;
                }
                text.erase(pos, 1);
            }
            ans += 1;
        }
        return ans;
    }
};