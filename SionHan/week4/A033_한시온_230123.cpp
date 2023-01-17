

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void Solution(vector<vector<int>>& contestants) {
    int size = contestants.size();
    int max = 0, ans = 0;

    for (int i = 0; i < size; ++i) {
        int sum = accumulate(contestants[i].begin(), contestants[i].end(), 0);

        if (sum > max) {
            max = sum;
            ans = i;
        }
    }
    cout << ans+1 << " " << max;
}

int main() {
    const int row = 5;
    const int col = 4;
    vector<vector<int>> v(row, vector<int>(col));

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> v[i][j];
        }
    }
    Solution(v);
    return 0;
}