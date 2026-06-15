#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int big = (a>b) ? a : b;
    int small = (a<b) ? a : b;
    while (small!=0)
    {
        int r = big % small;
        big = small;
        small = r;
    }
    printf("%d",big);
}