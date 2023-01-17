

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int lo = 1, hi = n;
        int result = guess(n);
        
        while (result != 0) {
            if (result == -1) {
                hi = min(hi, n);
            } else {
                lo = max(lo, n);
            }
            // do not use (lo+hi) / 2
            // it may cause overflow.
            n = lo + (hi-lo) / 2;
            result = guess(n);
        } 
        return n;
    }
};