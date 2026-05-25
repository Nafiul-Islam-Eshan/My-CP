#include<iostream>
using namespace std;
int main(){
    int n;
    bool isPrime = true;
    cin >> n;
    for (int i = 2; i < n ; i++)
    {
        if (n!=1 && n % i == 0) {
            isPrime = false;
            break;
        }      
    }
    if(isPrime) cout << "YES";
    else cout <<"NO";
}