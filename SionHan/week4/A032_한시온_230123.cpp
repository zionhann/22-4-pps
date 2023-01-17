

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void Solution(int t, vector<int>& k, vector<int>& n) {
    int max_floor = *max_element(k.begin(), k.end());
    int max_index = *max_element(n.begin(), n.end());   
    vector<vector<int>> ans(max_floor+1, vector<int>(max_index+1));

    for (int i = 1; i <= max_index; ++i) {
        ans[0][i] = i;
    }

    for (int i = 1; i <= max_floor; ++i) {
        for (int j = 1; j <= max_index; ++j) {
            ans[i][j] = accumulate(ans[i-1].begin()+1, ans[i-1].begin()+j+1, 0);
        }
    }

    for (int i = 0; i < t; ++i) {
        cout << ans[k[i]][n[i]] << '\n';
    }
}

int main() {
    int test_cases;
    vector<int> k;
    vector<int> n;

    cin >> test_cases;
    k.assign(test_cases, 0);
    n.assign(test_cases, 0);

    for (int i = 0; i < test_cases; ++i) {
        cin >> k[i] >> n[i];
    }
    Solution(test_cases, k, n);
    return 0;
}