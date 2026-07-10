#include <iostream>
using namespace std;
int main()
{
    int n, isPalindrome = 1;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i=0 , j=n-1; i < n, j>=0; i++, j--){
            b[j] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(b[i] != a[i]) {
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome) cout << "YES";
    else cout << "NO";
}