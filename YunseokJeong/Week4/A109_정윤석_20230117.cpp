#include <iostream>

using namespace std;

int main()
{
    int M, a, b, s, r_num = 1;
    int r = 0;

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> a >> b >> s;
        r_num = (r_num / a) * b;
        r++;
    }

    cout << r % 2 << r_num;

    return 0;
}