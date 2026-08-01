#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<ll> fibo{0,1};
    if(n<=0) return -1;
    else if(n == 1) {
        cout << fibo[0];
        return 0;
    }
    else if(n == 2) {
        cout << fibo[0] << " " << fibo[1];
        return 0;
    }
    for (int i = 2; i < n; i++)
    {        
        fibo.push_back(fibo[i-1] + fibo[i-2]) ;  
    }
    for (ll i : fibo)
    {
        cout << i << " ";
    }
}