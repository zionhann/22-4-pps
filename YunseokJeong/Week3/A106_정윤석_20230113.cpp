#include <iostream>
#include <string>

using namespace std;

int main()
{

    int test;

    cin >> test;

    for (int i = 0; i < test; i++)
    {

        string str;
        int len;
        int arr[26] = {0};
        int cnt = 0;
        int sum = 0;

        cin >> str;

        len = str.size();

        for (int i = 0; i < len; i++)
        {
            cnt = str[i] - 65;
            arr[cnt]++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == 0)
                sum += i + 65;
        }

        cout << sum << "\n";
    }

    return 0;
}