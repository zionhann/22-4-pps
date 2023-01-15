#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int compare(string a, string b)
{
    int a_size = a.size();
    int b_size = b.size();
    int a_sum = 0;
    int b_sum = 0;

    if (a_size != b_size)
    {
        return a_size < b_size;
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            a_sum += int(a[i]) - 48;
        }

        if (b[i] >= '0' && b[i] <= '9')
        {
            b_sum += int(b[i]) - 48;
        }
    }

    if (a_sum != b_sum)
    {
        return a_sum < b_sum;
    }

    return a < b;
}

int main()
{
    int N;
    string serial[50];

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> serial[i];
    }

    sort(serial, serial + N, compare);

    for (int i = 0; i < N; i++)
    {
        cout << serial[i] << endl;
    }

    return 0;
}