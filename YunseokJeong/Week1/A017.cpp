#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    int room[10] = {
        0,
    };

    cin >> n;

    for (int i = 0; i < n.length(); i++)
    {
        room[n[i] - 48]++;
    }

    int sixNine = (room[6] + room[9] + 1) / 2;

    room[6] = sixNine;
    room[9] = sixNine;

    int max = 0;

    for (int i = 0; i < 10; i++)
    {
        if (max < room[i])
        {
            max = room[i];
        }
    }

    cout << max << endl;
    return 0;
}