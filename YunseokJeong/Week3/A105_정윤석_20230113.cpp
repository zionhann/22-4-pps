#include <iostream>

using namespace std;

int main()
{
    int N;
    int i = 1;

    cin >> N;

    while (N > i)
    {
        N -= i;
        i++;
    }

    if (i % 2 == 1)
        cout << i + 1 - N << '/' << N << endl;
    else
        cout << N << '/' << i + 1 - N << endl;
}