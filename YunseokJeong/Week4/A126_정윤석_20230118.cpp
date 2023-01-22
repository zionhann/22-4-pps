#include <iostream>

using namespace std;

bool check(int a)
{
    int a1, a2, a3;

    if (a < 100)
        return true;

    a3 = a / 100;
    a1 = a % 10;
    a2 = a % 100 / 10;

    if (a3 - a2 == a2 - a1)
        return true;

    return false;
}
int main(void)
{
    int N, count = 0;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (check(i))
            count++;
    }

    cout << count;
}