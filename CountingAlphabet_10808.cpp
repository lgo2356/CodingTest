#include <iostream>
#include <string>

using namespace std;

int main()
{
    int alphabets[26] = {0,};
    string S;
    cin >> S;

    for (int i = 0; i <S.length(); i++) {
        alphabets[S[i] - 97]++;
    }

    for (int i = 0; i< 26; i++) {
        cout << alphabets[i] << " ";

        if (i == 25) cout << '\n';
    }

    cout << "Hello world!" << endl;
    return 0;
}
