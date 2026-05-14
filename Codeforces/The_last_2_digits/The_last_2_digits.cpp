#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long mul = (a%1000) * (b%1000) * (c%1000) * (d%1000);
    long long last1 = mul % 10;
    long long last2 = (mul / 10) % 10;
    cout << last2 << last1;
}