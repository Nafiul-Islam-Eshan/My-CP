#include <iostream>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    int points[test_cases][2] = {};
    for (int i = 0; i < test_cases; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> points[i][j];
        }
    }
    for (int j = 0; j < test_cases; j++)
    {
        if (points[j][1] % 2 == 0 || points[j][2] % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }

    return 0;
}
