#include <iostream>

using namespace std;

int Solution(const int& n, const int& start, const int& offset) {
    const int end = start + offset;
    
    if (n >= start && n < end) {
        return 1;
    }
    return 1 + Solution(n, end, offset+6);
}

int main() {
    int n;

    cin >> n;

    if (n == 1) {
        cout << 1;
        return 0;
    }
    cout << 1 + Solution(n, 2, 6);
    return 0;
}