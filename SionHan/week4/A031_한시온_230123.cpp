

#include <iostream>

using namespace std;

void Solution(int n, int m) {
    cout << (m-1) + (m*(n-1));
}

int main() {
    int n, m;

    cin >> n >> m;

    Solution(n, m);
    return 0;
}