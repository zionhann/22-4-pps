#include <iostream>

using namespace std;

int main()
{
    int n;
    double ans;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ans = 1.0;
        int station;

        cin >> station;

        for (int j = 0; j < station - 1; j++)
        {
            ans += 0.5;
            ans *= 2.0;
        }

        cout << (int)ans << " ";
    }

    cout << endl;

    return 0;
}