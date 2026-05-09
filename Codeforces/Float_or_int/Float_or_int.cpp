#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float f;
    cin >> f;
    int intPart = (int) f;
    float floatPart = f - intPart;
    if(floatPart == 0) cout << "int " << intPart;
    else cout << "float " << intPart << " " << fixed << setprecision(3) << floatPart;
    return 0;
}