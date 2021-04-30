#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Stack
{
private:
    vector<int> stack;

public:
    void push(int x)
    {
        stack.push_back(x);
    }

    int pop()
    {
        if (stack.empty())
        {
            return -1;
        }
        else
        {
            int pop = stack.back();
            stack.pop_back();

            return pop;
        }
    }

    int size()
    {
        return stack.size();
    }

    bool empty()
    {
        return stack.empty();
    }

    int top()
    {
        if (stack.empty())
        {
            return -1;
        }
        else
        {
            int top = stack.back();
            return top;
        }
    }
};

int main(void)
{
    ios_base::sync_with_stdio(false);

    Stack stack;

    int N;
    cin >> N;
    // cout << '\n';

    for (int i = 0; i < N; i++)
    {
        string command;
        int number;
        cin >> command;

        if (command == "push")
            cin >> number;

        if (command == "push")
        {
            stack.push(number);
        }
        else if (command == "pop")
        {
            cout << stack.pop() << '\n';
        }
        else if (command == "size")
        {
            cout << stack.size() << '\n';
        }
        else if (command == "empty")
        {
            cout << stack.empty() << '\n';
        }
        else if (command == "top")
        {
            cout << stack.top() << '\n';
        }
    }

    return 0;
}