#include <iostream>
using namespace std;
int main()
{
    int max = 0;
    int num = 0;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = 0;
        int a = 0, b = 0, c = 0, d = 0;
        cin >> a >> b >> c >> d;
        sum += a + b + c + d;
        if (sum > max)
        {
            max = sum;
            num = i;
        }
    }
    cout << num + 1 << " " << max;
}