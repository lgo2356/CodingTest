#include <stdio.h>

int main(void)
{
    int N;
    int arr[10000] = {
        0,
    };

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int tmp;
        scanf("%d", &tmp);

        arr[tmp - 1]++;
    }

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] > 0)
        {
            for (int j = 0; j < arr[i]; j++)
            {
                printf("%d\n", i + 1);
            }
        }
    }

    return 0;
}