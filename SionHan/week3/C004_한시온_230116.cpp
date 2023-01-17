#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int Collect(int num) {
    int sum = 0;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int Solution(const int& n) {
    vector<int> ans;

    for (int i = 0; i <= n; ++i) {
        int dsum = i + Collect(i);

        if (dsum == n) {
            ans.push_back(i);
        }
    }
    return (ans.empty()) ? 0 : *min_element(ans.begin(), ans.end());
}

int main() {
    int n;

    cin >> n;

    cout << Solution(n);
    return 0;
}