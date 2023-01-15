#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums;
    int n, k;

    cin >> n;
    cin >> k;

    int index = k - 1;

    for (int i = 0; i < n; i++)
        nums.emplace_back(i + 1);

    cout << "<";

    while (1)
    {
        index %= nums.size();

        cout << nums[index];

        nums.erase(nums.begin() + index);

        if (!nums.empty())
        {
            cout << ", ";
        }
        else
            break;

        index += k - 1;
    }

    cout << ">";

    return 0;
}