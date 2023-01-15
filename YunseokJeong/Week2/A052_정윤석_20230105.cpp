#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    string s;

    cin >> T;

    for (int j = 0; j < T; j++)
    {
        cin >> s;

        int sum, count;
        sum = count = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'O')
                count++;
            else
                count = 0;
            sum += count;
        }
        cout << sum << '\n';
    }
}
