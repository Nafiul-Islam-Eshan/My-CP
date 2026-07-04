#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count[n + 1];
    for (int i = 0; i <= n; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (count[i] == 0) cout << "Missing : " << i << endl;
        if (count[i] == 2) cout << "Repeating : " << i << endl;
    }
}
