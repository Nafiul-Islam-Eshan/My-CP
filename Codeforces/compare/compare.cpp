#include<iostream>
#include<string>
using namespace std;

int main(){
    string a, b;
    cin >> a;
    cin >> b;
    if(a.compare(b) < 0) cout << a;
    else cout << b;
}