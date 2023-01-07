#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    cin.tie(NULL);

    int count[10] = {};
    int a, b, c;

    cin >> a >> b >> c;

    int res = a * b * c;

    while (res != 0)
    {
        count[res % 10]++;
        res /= 10;
    }

    for (int v : count)
    {
        cout << v << "\n";
    }

    return 0;
}