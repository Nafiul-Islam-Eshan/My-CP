#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int a[r][c];
    cout << "Enter matrix element :" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    int mn = a[0][0];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] < mn)
            {
                mn = a[i][j];
            }
        }
    }
    cout << "Minimum = " << mn;
}