

#include <iostream>
#include <vector>

using namespace std;

void Solution(int a, int b, int c) {
    int num = a * b * c;
    vector<int> ans(10);

    while (num != 0) {
        ans[num%10] += 1;
        num /= 10;
    }

    for (int n : ans) {
        cout << n << '\n';
    }
}

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    Solution(a, b, c);
    return 0;
}