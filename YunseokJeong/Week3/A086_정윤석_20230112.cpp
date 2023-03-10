#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    string str;
    string nums[11] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<pair<string, int>> v;

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> M >> N;

    for (int i = M; i <= N; i++)
    {
        if (i >= 10)
        {
            str = nums[i / 10] + " " + nums[i % 10];
            v.push_back({str, i});
        }
        else
        {
            str = nums[i % 10];
            v.push_back({str, i});
        }
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].second << " ";
        if (i % 10 == 9)
            cout << '\n';
    }
}