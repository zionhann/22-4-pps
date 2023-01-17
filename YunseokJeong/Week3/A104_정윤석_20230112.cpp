#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N = 0;
    vector<int> v;
    int sum = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), greater<int>());

    for (int i : v)
    {
        sum += i;
    }

    sum -= v[0];

    cout << sum;

    return 0;
}