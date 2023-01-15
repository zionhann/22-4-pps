#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    int arr[10] = {
        0,
    };

    cin >> num;
    for (int j = 0; j < num; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 10);

        cout << arr[7] << endl;
    }

    return 0;
}