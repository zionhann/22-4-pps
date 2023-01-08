#include <iostream>
#include <string>
using namespace std;

int N;
int alphabet[26];

int main(void)
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string input;
        cin >> input;
        alphabet[input[0] - 'a']++;
    }

    bool predaja = true;

    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] >= 5)
        {
            cout << char(97 + i);
            predaja = false;
        }
    }
    if (predaja)
        cout << "PREDAJA";
}