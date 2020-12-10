#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 100;

template <class t>
class stack
{
    int top;
    t item[MAX_SIZE];

public:
    stack() : top(-1) {}

    void push(t Element)
    {
        if (top >= MAX_SIZE - 1)
        {
            cout << "stack full on push";
        }
        else
        {
            top++;
            item[top] = Element;
        }
    }

    bool isEmpty()
    {
        // if (top == -1)
        //     return true;
        // else
        //     return false;

        return top < 0;
    }
    void pop()
    {
        if (isEmpty())
            cout << "stack empty on pop";
        else
            top--;
    }

    void pop(t &element)
    {
        if (isEmpty())
            cout << "stack empty on pop";
        else
        {
            element = item[top];
            top--;
        }
    }

    void getTop(t &stackTop)
    {
        if (isEmpty())
            cout << "stack empty on getTop";
        else
        {
            stackTop = item[top];
            cout << stackTop << endl;
        }
    }

    void print()
    {
        cout << "[";
        for (int i = top; i >= 0; i--)
        {
            cout << item[i] << " ";
        }
        cout << "]";
        cout << endl;
    }
};

int main()
{
    stack<string> s;

    s.push("Osman");
    s.push("Mostafa");
    s.push("Hussein");
    s.push("Hamza");
    s.print();
    //char y='';

    //s.getTop(y);
}