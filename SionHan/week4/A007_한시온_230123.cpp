

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void Solution(vector<int>& arr) {
    vector<int> origin(arr);

    sort(arr.begin(), arr.end());

    if (origin == arr) {
        cout << "ascending";
        return;
    }
    sort(arr.begin(), arr.end(), greater<int>());

    if (origin == arr) {
        cout << "descending";
        return;
    }
    cout << "mixed";
}

int main() {
    int i = 0;
    vector<int> arr(8);

    while (i < 8) {
        cin >> arr[i];
        i += 1;
    }
    Solution(arr);
    return 0;
}