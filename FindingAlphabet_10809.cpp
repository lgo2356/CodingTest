#include <iostream>
#include <string>

using namespace std;

int main()
{
    int alphabets[26];
    string S;
    cin >> S;

    for (int i = 0; i < sizeof(alphabets) / sizeof(int); i++) {
        alphabets[i] = -1;
    }

    for (int i = S.length(); i >= 0; i--) {
        alphabets[S[i] - 97] = i;
    }

    for (int i = 0; i< 26; i++) {
        cout << alphabets[i] << " ";

        if (i == 25) cout << '\n';
    }

    return 0;
}
