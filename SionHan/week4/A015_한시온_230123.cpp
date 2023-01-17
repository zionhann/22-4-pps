

#include <iostream>
#include <vector>

using namespace std;

void Solution(vector<int>& nums) {
    int sum = 0;

    for (int num : nums) {
        sum += num * num;
    }
    cout << sum % 10;
}

int main() {
    int n = 5;
    vector<int> arr(5);

    while (n--) {
        cin >> arr[n];
    }
    Solution(arr);
    return 0;
}