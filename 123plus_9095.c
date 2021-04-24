#include <stdio.h>

int memo[1001];

int dp(int x)
{
    if (x == 0)
        return 0;
    if (x == 1)
        return 1;
    if (x == 2)
        return 2;
    if (x == 3)
        return 4;

    if (memo[x] != 0)
        return memo[x];

    memo[x] = dp(x - 3) + dp(x - 2) + dp(x - 1);

    return memo[x];
}

int main(void)
{
    int T, x;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &x);
        printf("%d\n", dp(x));
    }

    return 0;
}
