#include <iostream>

using namespace std;

int main()
{
    int N, j, count = 0;
    string str;
    int arr[26];
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> str;
        fill_n(arr, 26, 0);

        arr[str[0] - 97] = 1;

        for (j = 1; j < str.length(); j++)
        {
            if (str[j - 1] != str[j])
            {
                int index = str[j] - 97;
                if (arr[index] == 0)
                    arr[index]++;
                else
                    break;
            }
        }
        if (j == str.length())
            count++;
    }
    cout << count;
}