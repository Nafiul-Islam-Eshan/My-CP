#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        if (n>10)
        {
            int j = 0;
            for (int i = 1; i < n-1; i++)
            {
                j++;
            }
            cout << s[0] << j << s[n-1] << endl;
        }
        else cout << s << endl;
    }
}