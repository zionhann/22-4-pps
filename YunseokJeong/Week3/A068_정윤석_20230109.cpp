#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int count, x;
    string str;
    queue<int> Q;

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> str;

        if (str == "push")
        {
            cin >> x;
            Q.push(x);
        }
        else if (str == "pop")
        {
            if (!Q.empty())
            {
                cout << Q.front() << '\n';
                Q.pop();
            }
            else
                cout << -1 << '\n';
        }
        else if (str == "size")
        {
            cout << Q.size() << '\n';
        }
        else if (str == "empty")
        {
            cout << Q.empty() << '\n';
        }
        else if (str == "front")
        {
            if (!Q.empty())
                cout << Q.front() << '\n';
            else
                cout << -1 << '\n';
        }
        else
        {
            if (!Q.empty())
                cout << Q.back() << '\n';
            else
                cout << -1 << '\n';
        }
    }
}