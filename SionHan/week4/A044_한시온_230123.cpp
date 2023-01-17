

class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0, late = 0;
        
        for (char state : s) {
            if (state == 'L') {
                late += 1;
                
                if (late == 3) {
                    return false;
                }
            } else {
                if (late > 0) {
                    late = 0;
                }
                
                if (state == 'A') {
                    absent += 1;
                }
            }
        }
        return absent < 2 && late < 3;
    }
};