#include <iostream>

using namespace std;

int main()
{
    int N;
    int arr[100];

    cin >> N;

    while (N--)
    {
        int input, copy, sum;
        int reverse = 0;
        int i = 0;
        bool T = true;

        cin >> input;

        copy = input;

        while (1)
        {
            reverse += input % 10;

            if (input / 10 == 0)
            {
                break;
            }

            reverse *= 10;
            input /= 10;
        }

        sum = copy + reverse;

        while (1)
        {
            arr[i] = sum % 10;

            i++;

            if (sum / 10 == 0)
                break;

            sum /= 10;
        }

        for (int j = 0; j < i / 2; j++)
        {
            if (arr[j] != arr[i - 1 - j])
                T = false;
        }

        if (T)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}