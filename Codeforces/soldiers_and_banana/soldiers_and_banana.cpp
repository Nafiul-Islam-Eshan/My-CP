#include<iostream>
using namespace std;

int main(){
    int w, k, tprice=0;
    long long n;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        tprice += k*i;
    }
    if (tprice>n)
    {
        cout << tprice-n;
    }
    else cout << 0;
    return 0;
}