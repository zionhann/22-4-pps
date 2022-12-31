#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Solution(int n) {
    vector<int> counter(10);
    int six_or_nine = 0;

    while (n != 0) {
        // Parse
        const int digit = n % 10;

        if (digit == 6 || digit == 9) six_or_nine++;
        else counter[digit]++;

        n /= 10;
    }
    return max(*max_element(counter.begin(), counter.end()), (six_or_nine/2)+(six_or_nine%2));
}

int main() {
    int n;

    cin >> n;
    cout << Solution(n);
    return 0;
}