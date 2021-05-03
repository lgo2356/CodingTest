#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);

    int T;
    vector<char> stack;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string ps;
        cin >> ps;

        for (int i = 0; i < ps.length(); i++)
        {
            if (ps[i] == '(')
            {
                stack.push_back(ps[i]);
            }
            else
            {
                if (!stack.empty() && stack.back() == '(')
                {
                    stack.pop_back();
                }
                else
                {
                    stack.push_back(ps[i]);
                }
            }
        }

        if (stack.empty())
        {
            cout << "YES" << '\n';
            vector<char>().swap(stack);
        }
        else
        {
            cout << "NO" << '\n';
            vector<char>().swap(stack);
        }
    }

    return 0;
}