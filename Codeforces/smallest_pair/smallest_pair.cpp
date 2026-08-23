#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long ans, small = INT64_MAX;
        cin >> n;
        int a[n+1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n-1; i++)
        {
            for (int j = i+1; j <= n; j++)
            {
                ans = a[i] + a[j] + j - i;
                if(small > ans) small = ans;
            }   
        }
        cout << small;
    }
}