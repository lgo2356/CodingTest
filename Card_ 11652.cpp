#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(void)
{
    int N;
    int maxCnt = 0;
    int cnt = 1;
    long long maxNumCard;
    vector<long long> v;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        long long tmp;
        scanf("%lld", &tmp);
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++)
    {
        if (i > 0 && v[i] == v[i - 1])
        {
            cnt++;

            if (cnt > maxCnt)
            {
                maxCnt = cnt;
                maxNumCard = v[i - 1];
            }
        }
        else if (i > 0 && v[i] != v[i - 1])
        {
            cnt = 1;
        }
        else if (i == 0)
        {
            maxNumCard = v[i];
        }
    }

    printf("%lld\n", maxNumCard);

    return 0;
}