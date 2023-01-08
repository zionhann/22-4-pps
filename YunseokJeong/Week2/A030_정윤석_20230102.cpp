#include <iostream>
using namespace std;

int main()
{
    int N, stat;
    float gg, gb, bg, bb;
    float good[100];
    float bad[100];

    scanf("%d %d", &N, &stat);
    scanf("%f %f %f %f", &gg, &gb, &bg, &bb);

    if (stat == 0)
    {
        good[0] = gg;
        bad[0] = gb;
    }
    else
    {
        good[0] = bg;
        bad[0] = bb;
    }
    for (int i = 2; i <= N; i++)
    {
        good[i] = good[i - 1] * gg + bad[i - 1] * bg;
        bad[i] = good[i - 1] * gb + bad[i - 1] * bb;
    }
    printf("%.0f\n", good[N] * 1000);
    printf("%.0f\n", bad[N] * 1000);
    return 0;
}