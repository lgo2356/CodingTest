#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int N;
    int arr[1000001];
    vector<int> v;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int n;
        scanf("%d", &n);

        v.push_back(n);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", v[i]);
    }

    return 0;
}