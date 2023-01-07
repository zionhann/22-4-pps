#include <stdio.h>

int main()
{
    int c;

    scanf("%d", &c);

    for (int i = 0; i < c; i++)
    {
        int n;
        int over = 0;

        scanf("%d", &n);
        int scores[n];
        double avg = 0.0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &scores[i]);
            avg += scores[i];
        }
        avg = avg / n;

        for (int i = 0; i < n; i++)
        {
            if (scores[i] > avg)
            {
                over++;
            }
        }

        printf("%.3f%\n", (over / double(n)) * 100);
    }

    return 0;
}