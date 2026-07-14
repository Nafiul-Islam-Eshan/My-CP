#include<iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter Row & Column";
    cin >> r >> c;
    int a[r][c], b[r][c];
    cout << "First matrix element :" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Second matrix element :" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "Additon: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Subtraction: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] - b[i][j] << " ";
        }
        cout << endl;
    }
}