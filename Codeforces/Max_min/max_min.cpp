#include<iostream>
using namespace std;
int main()
{
    int a, b, c, max, min;
    cin >> a >> b >> c;
    if (a>b && a>c)
    {
        max = a;
        if (b>c) min = c;
        else min = b;
    }
    else if (b>c)
    {
        max = b;
        if(a>c) min = c;
        else min = a;
    }
    else{
        max = c;
        if(a>b) min = b;
        else min = a;
    }
    cout << min << " " << max;
    return 0;
}
