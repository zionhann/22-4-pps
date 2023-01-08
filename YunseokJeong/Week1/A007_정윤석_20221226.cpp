#include <stdio.h>

int main()
{
    int notes[8];
    int ascending = 1;
    int descending = 1;

    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &notes[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        if (notes[i] == i + 1)
        {
            continue;
        }
        ascending = -1;
        break;
    }

    for (int i = 0; i < 8; i++)
    {
        if (notes[i] == 8 - i)
        {
            continue;
        }
        descending = -1;
        break;
    }

    if (ascending == 1)
    {
        printf("ascending\n");
    }
    else if (descending == 1)
    {
        printf("descending\n");
    }
    else
        printf("mixed\n");

    return 0;
}