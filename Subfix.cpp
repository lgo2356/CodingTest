#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    string S;
    vector<string> subfix;
    string subfix_tmp = "";

    cin >> S;

    for (int i = S.size() - 1; i >= 0; i--)
    {
        string new_subfix = S[i] + subfix_tmp;
        subfix.push_back(new_subfix);
        subfix_tmp = new_subfix;
    }

    sort(subfix.begin(), subfix.end());

    for (int i = 0; i < S.size(); i++)
    {
        cout << subfix[i] << '\n';
    }

    return 0;
}