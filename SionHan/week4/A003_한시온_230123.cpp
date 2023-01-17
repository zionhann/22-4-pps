

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        
        digits.back() += 1;
        
        for (auto iter = digits.rbegin(); iter != digits.rend()-1; ++iter) {
            if (*iter == 10) {
                *iter = 0;
                *next(iter) += 1;
            }
        }
        
        if (digits.front() == 10) {
            digits.front() = 0;
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};