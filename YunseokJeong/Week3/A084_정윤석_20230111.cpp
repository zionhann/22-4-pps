#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    string temp[1000];

    cin >> str;

    int len = str.size();

    for (int i = 0; i < len; i++)
    {
        temp[i] = str.substr(i, len);
    }

    sort(temp, temp + len);

    for (int i = 0; i < len; i++)
    {
        cout << temp[i] << endl;
    }
}