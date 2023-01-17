

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int size = nums.size();
        vector<string> ans;
        string str;
        
        for (int start = 0; start < size; ++start) {
            int last = start;
            
            while (last+1 < size && nums[last+1] == nums[last]+1) {
                last += 1;
            }
            
            if (start == last) {
                str += to_string(nums[start]);
                ans.push_back(str);
            } else {
                str += to_string(nums[start]);
                str += "->";
                str += to_string(nums[last]);
                ans.push_back(str);
            }
            start = last;
            str.clear();
        }
        return ans;
    }
};