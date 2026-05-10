#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    char op, equ;
    cin >> a >> op >> b >> equ >> c;
    switch (op)
    {
    case '+':
        if (a+b == c) cout << "Yes";
        else cout << a+b;
        break;
    case '-':
        if (a-b == c) cout << "Yes";
        else cout << a-b;
        break;
    case '*':
        if (a*b == c) cout << "Yes";
        else cout << a*b;
        break;
    }
}