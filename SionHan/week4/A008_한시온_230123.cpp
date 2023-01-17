

#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <numeric>
#include <vector>

using namespace std;

void Solution(vector<vector<int>>& scores) {
    for (auto score : scores) {
        int size = score.size();
        int avg = accumulate(score.begin(), score.end(), 0) / size;
        int i = 0;

        for (int num : score) {
            if (num > avg) {
                i += 1;
            }
        }
        double ans = (double) i / (double) size * 100;
        printf("%.3lf%%\n", ans);
    }
}

int main() {
    int row;
    vector<vector<int>> scores  ;

    cin >> row;

    while (row--) {
        int n;
        vector<int> v;
    
        cin >> n;
        v.assign(n, 0);

        while (n--) {
            cin >> v[n];
        }
        scores.push_back(v);
    }
    Solution(scores);
    return 0;
}