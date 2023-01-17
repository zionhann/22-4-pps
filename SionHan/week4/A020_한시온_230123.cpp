

#include <iostream>
#include <vector>

using namespace std;

void Solution(vector<int>& out, vector<int>& in) {
    int size = out.size();
    int num = 0, max = 0;

    for (int i = 0; i < size; ++i) {
        num += in[i] - out[i];

        if (num > max) {
            max = num;
        }
    }
    cout << max;
}

int main() {
    vector<int> out(4), in(4);

    for (int i = 0; i < 4; ++i) {
        cin >> out[i] >> in[i];
    }
    Solution(out, in);
    return 0;
}