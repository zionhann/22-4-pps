#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int Solution(vector<int>& a, vector<int>& b) {
    sort(a.begin(), a.end(), greater<int>());
    vector<int> ans;

    for (int num_a : a) {
        vector<int> mul;

        int& num_b = *min_element(b.begin(), b.end());
        ans.push_back(num_a*num_b);
        num_b = 100;
    }
    return accumulate(ans.begin(), ans.end(), 0);
}

int main() {
    int n;

    cin >> n;
    
    vector<int> a(n), b(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    cout << Solution(a, b);
    return 0;
}