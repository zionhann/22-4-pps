#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

int main()
{
    vector<pair<int, int>> score(8);
    int total = 0;

    for (int i = 0; i < 8; i++)
    {
        pair<int, int> temp;

        temp.first = i + 1;
        cin >> temp.second;

        score.push_back(temp);
    }

    sort(score.begin(), score.end(), compare);

    for (int i = 0; i < 5; i++)
    {
        total += score[i].second;
    }

    cout << total << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << score[i].first;
    }
}