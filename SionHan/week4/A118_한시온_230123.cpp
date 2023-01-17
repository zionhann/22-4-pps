
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        
        for (int num : nums) {
            if (num != 0) {
                nums.at(i) = num;
                i += 1;
            }
        }
        
        while (i < nums.size()) {
            nums.at(i) = 0;
            i += 1;
        }
    }
};