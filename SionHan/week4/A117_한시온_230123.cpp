

class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int sum1 = 0, sum2 = 0;
        
        if (start > destination) {
            swap(start, destination);
        }
        
        for (int i = 0; i < distance.size(); i++) {
            if (i >= start && i < destination) {
                // 순방향
                sum1 += distance.at(i);
            } else {
                // 역방향
                sum2 += distance.at(i);
            }
        }
        return min(sum1, sum2);
    }
};