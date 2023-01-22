#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int need, n, ans = 0;
    vector<int> package, piece;

    cin >> need >> n;

    for (int i = 0; i < n; i++)
    {
        int set_price, price;

        cin >> set_price >> price;

        package.push_back(set_price);
        piece.push_back(price);
    }

    sort(package.begin(), package.end());
    sort(piece.begin(), piece.end());

    int standard = package[0] / piece[0];

    if (standard < 6)
    {
        while (need > 0)
        {
            if (need > standard)
            {
                need -= 6;
                ans += package[0];
            }
            else
            {
                ans += piece[0] * need;
                break;
            }
        }
    }
    else
    {
        ans = piece[0] * need;
    }

    cout << ans << endl;

    return 0;
}