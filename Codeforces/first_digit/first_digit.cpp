#include<iostream>
using namespace std;

int first_digit(int n){
    while (n >= 10)
    {
        n = n/10;
    }
    return n;
}

int main()
{
    int num;
    cin >> num;
    if (first_digit(num)%2 ==0) cout << "EVEN";  
    else cout << "ODD";  
    return 0;
}