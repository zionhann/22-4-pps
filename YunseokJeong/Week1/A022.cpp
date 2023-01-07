#include <iostream>

using namespace std;

int main()
{

    int N;
    cin >> N;

    int input;
    int young = 0;
    int minsik = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> input;
        young += ((input / 30) + 1) * 10;
        minsik += ((input / 60) + 1) * 15;
    }

    if (young > minsik)
    {
        cout << "M " << minsik;
    }
    else if (young < minsik)
    {
        cout << "Y " << young;
    }
    else
    {
        cout << "Y M " << young;
    }

    return 0;
}