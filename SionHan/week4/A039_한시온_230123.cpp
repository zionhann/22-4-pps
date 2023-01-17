

class Solution {
public:
    bool isPerfectSquare(int num) {
        int ps = 0;
        
        for (int i = 0; i <= (num-ps)/2; ++i) {
            ps = ps + (2*i+1);
            
            if (ps == num) {
                return true;
            }
        }
        return false;
    }
};