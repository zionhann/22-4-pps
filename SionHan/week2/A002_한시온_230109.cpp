class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans = {{1}};
        
        for (int i = 2; i <= numRows; i++) {
            vector<int> v(i, 1);
            vector<int>& last = ans.back();
            
            for (int j = 0; j < last.size()-1; j++) {
                v.at(j+1) = last.at(j) + last.at(j+1);
            }
            ans.push_back(v);
        }
        return ans;
    }
};