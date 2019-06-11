#include <iostream>
#include <stdio.h>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<int> stack;
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
            stack.push(n);
        }
        if (command == "pop")
        {
            cout << stack.top() << endl;
            stack.pop();
        }
        if (command == "back")
        {
            cout << stack.top() << endl;
        }
        if (command == "size")
        {
            cout << stack.size() << endl;
        }
        if (command == "clear")
        {
            cout << "ok" << endl;
            while (stack.size() > 0)
            {
                stack.pop();
            }
        }
        if (command == "exit")
        {
            cout << "bye" << endl;
            a = 1;
        }
    }
}