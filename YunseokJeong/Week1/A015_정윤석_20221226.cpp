#include <stdio.h>

int main()
{
    int nums[5];
    int verify = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        verify += nums[i] * nums[i];
    }

    verify = verify % 10;

    printf("%d\n", verify);

    return 0;
}