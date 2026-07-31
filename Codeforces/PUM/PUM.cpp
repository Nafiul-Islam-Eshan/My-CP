#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][4], b=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            a[i][j] = b;
            b++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(a[i][j] % 4 == 0) cout << "PUM";
            else cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
}