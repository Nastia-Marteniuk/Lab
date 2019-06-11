#include <iostream>
#include <stdio.h>
#include <queue>
#include <string>

using namespace std;

int main()
{
    queue<int> queue;
    int a = 0;
    while (a == 0)
    {
        string command;
        cin >> command;
        if (command == "push")
        {
            cout << "ok" << endl;
            int n;
            cin >> n;
            queue.push(n);
        }
        if (command == "pop")
        {
            cout << queue.front() << endl;
            queue.pop();
        }
        if (command == "front")
        {
            cout << queue.front() << endl;
        }
        if (command == "size")
        {
            cout << queue.size() << endl;
        }
        if (command == "clear")
        {
            cout << "ok" << endl;
            while (queue.size() > 0)
            {
                queue.pop();
            }
        }
        if (command == "exit")
        {
            cout << "bye" << endl;
            a = 1;
        }
    }
}