#include <iostream>

using namespace std;

int alpha[26], cnt = 0;
string s;

int main()
{
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 97)
            alpha[s[i] - 65]++;
        else
            alpha[s[i] - 97]++;
    }

    int max = 0, max_indx = 0;

    for (int i = 0; i < 26; i++)
    {
        if (max < alpha[i])
        {
            max = alpha[i];
            max_indx = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (max == alpha[i])
            cnt++;
    }

    if (cnt > 1)
        cout << "?";
    else
        cout << (char)(max_indx + 65);
}