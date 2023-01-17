
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (auto iter = nums.begin(); next(iter) != nums.end();) {
            if (*iter == *next(iter)) {
                iter = nums.erase(iter);
            } else {
                iter += 1;
            }
        }
        return nums.size();
    }
};