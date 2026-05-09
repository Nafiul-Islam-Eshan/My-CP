#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max;
    cin >> a >> b >> c;
    if(a>b && a>c) max= a;
    else if(b>c) max=b;
    else max=c;
    int m = (a+b+c)-max;
    if(m>max) printf("Triange can be formed");
    else printf("Triange can not be formed");
    return 0;
}