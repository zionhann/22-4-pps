#include <iostream>

using namespace std;

int main()
{
    string s1, s2, ans = "";
    char ea;
    int s1_size, s2_size;
    bool carry = false;

    cin >> s1 >> s2;
    s1_size = s1.size() - 1;
    s2_size = s2.size() - 1;

    while (s1_size >= 0 || s2_size >= 0)
    {
        ea = 0;

        if (carry)
            ea++;
        carry = false;

        if (s1_size >= 0 && s2_size >= 0)
            ea += (s1[s1_size] - '0') + (s2[s2_size] - '0');
        else if (s1_size >= 0)
            ea += (s1[s1_size] - '0');
        else if (s2_size >= 0)
            ea += (s2[s2_size] - '0');

        if (ea > 9)
        {
            ea -= 10;
            carry = true;
        }

        ea += '0';
        ans = ea + ans;
        s1_size--;
        s2_size--;
    }

    if (carry)
        ans = '1' + ans;

    cout << ans;
    return 0;
}