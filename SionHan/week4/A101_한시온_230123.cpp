

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int bob_sum = getSum(bobSizes);
        int same = (getSum(aliceSizes)+bob_sum) / 2;
        map<int, int> alice = init(aliceSizes);
        vector<int> answer;
        
        for (int candy : bobSizes) {
            int need = same - bob_sum + candy;
            
            if (alice.count(need)) {
                answer.push_back(need);
                answer.push_back(candy);
                break;
            }
        }
        return answer;
    }
    int getSum(vector<int>& v) {
        return accumulate(v.begin(), v.end(), 0);
    }
    map<int, int> init(vector<int>& v) {
        map<int, int> m;
        
        for (int value : v) {
            if (m.count(value)) {
                m[value] += 1;
                continue;
            }
            m[value] = 0;
        }
        return m;
    }
};