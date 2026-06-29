#include<iostream>
using namespace std;
int main()
{
    int n,x,position;
    bool isFound = false;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            position = i;
            isFound = true;
            break;
        }
    }

    if(isFound) cout << position << endl;
    else cout << "-1";
}