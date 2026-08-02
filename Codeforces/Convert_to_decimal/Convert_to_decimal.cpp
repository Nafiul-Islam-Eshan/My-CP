#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        while (n > 0)
        {
            if(n % 2) count++;
            n /= 2;
        }
        int ans = pow(2, count) - 1;
        cout << ans << endl;
    }
}