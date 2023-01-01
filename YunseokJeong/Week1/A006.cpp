#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(string s)
{
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
        if (s[i] == 'p')
            count++;
        else if (s[i] == 'y')
            count--;
    }

    if (count == 0)
        return 1;
    else
        return 0;
}