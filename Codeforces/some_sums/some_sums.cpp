#include<iostream>
using namespace std;
int main(){
    int n, a, b, sum=0;
    if(a > b) swap(a ,b);
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        int temp = i, dgtSum=0;
        while (temp != 0)
        {
            int last = temp % 10;
            dgtSum += last;
            temp /= 10;
        }
        if (dgtSum>=a && dgtSum<=b)
        {
            sum += i;
        }
    }
    cout << sum;
}