#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);

    int N, K;
    vector<int> v;

    cin.tie(0);
    cin >> N >> K;

    v.resize(N);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << v[K - 1] << '\n';

    return 0;
}