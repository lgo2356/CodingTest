#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Queue
{
private:
    vector<int> queue;

public:
    void push(int x)
    {
        queue.push_back(x);
    }

    int pop()
    {
        if (queue.empty())
        {
            return -1;
        }

        int popNumber = queue.front();
        queue.erase(queue.begin());
        return popNumber;
    }

    int size()
    {
        return queue.size();
    }

    bool empty()
    {
        return queue.empty();
    }

    int front()
    {
        if (queue.empty())
        {
            return -1;
        }

        return queue.front();
    }

    int back()
    {
        if (queue.empty())
        {
            return -1;
        }

        return queue.back();
    }
};

int main(void)
{
    ios_base::sync_with_stdio(false);

    Queue queue;
    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string command;
        int number;
        cin >> command;

        if (command == "push")
        {
            cin >> number;
            queue.push(number);
        }
        else if (command == "pop")
        {
            cout << queue.pop() << '\n';
        }
        else if (command == "size")
        {
            cout << queue.size() << '\n';
        }
        else if (command == "empty")
        {
            cout << queue.empty() << '\n';
        }
        else if (command == "front")
        {
            cout << queue.front() << '\n';
        }
        else if (command == "back")
        {
            cout << queue.back() << '\n';
        }
    }

    return 0;
}