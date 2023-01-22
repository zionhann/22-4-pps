#include <iostream>

using namespace std;

int main()
{
    int unit[] = {500, 100, 50, 10, 5, 1};
    int amount, ans = 0;

    cin >> amount;

    amount = 1000 - amount;

    for (int i = 0; i < 6 && amount > 0; i++)
    {
        ans += amount / unit[i];
        amount = amount % unit[i];
    }

    cout << ans << endl;

    return 0;
}