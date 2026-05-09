#include<iostream>
using namespace std;
int main()
{
    char operation;
    int n1, n2;
    cin >> n1 >> operation >> n2 ;
    switch (operation)
    {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        cout << n1 / n2;
        break;
    }
    return 0;
}