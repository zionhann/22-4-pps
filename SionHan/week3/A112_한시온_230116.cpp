#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int ZeroOr(const int n) {
    return (n < 0) ? 0 : n;
}

int Solution(int n, const vector<int>& p, const vector<int>& s) {
    vector<int> ans;

    const int mx = n/6 + 1;
    const int min_p = *min_element(begin(p), end(p));
    const int min_s = *min_element(begin(s), end(s));

    for (int i = 0; i <= mx; ++i) {
        const int j = n - i*6;
        ans.push_back(i*min_p + ZeroOr(j) * min_s);
    }
    return *min_element(begin(ans), end(ans));
}

int main() {
    int n, m;

    cin >> n >> m;
    vector<int> p(m), s(m);

    while (m--) {
        cin >> p[m] >> s[m];
    }
    cout << Solution(n, p, s);
    return 0;
}