

#include <iostream>
#include <vector>

using namespace std;

void Solution(vector<int>& v) {
    struct { int y; int m; } plan { .y=0, .m=0 };

    for (int cost : v) {
        plan.y += (cost/30) * 10 + 10;
        plan.m += (cost/60) * 15 + 15;
    }

    if (plan.y == plan.m) {
        cout << "Y M " << plan.y;
    } else if (plan.y > plan.m) {
        cout << "M " << plan.m;
    } else {
        cout << "Y " << plan.y;
    }
}

int main() {
    int n;
    vector<int> v;

    cin >> n;
    v.assign(n, 0);

    while (n--) {
        cin >> v[n];
    }
    Solution(v);
    return 0;
}