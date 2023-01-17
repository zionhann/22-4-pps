

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs.front();
        
        for (int i = 1; i < strs.size(); ++i) {
            string& str = strs[i];
            int j = 0;
            
            while (j < ans.size()) {
                if (j == str.size() || ans[j] != str[j]) {
                    ans.erase(j);
                    break;
                }
                j += 1;
            }
        }
        return ans;
    }
};