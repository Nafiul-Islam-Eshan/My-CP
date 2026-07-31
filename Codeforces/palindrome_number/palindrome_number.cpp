#include<iostream>
using namespace std;
int main(){
    int n, rev=0;
    cin >> n;
    int temp = n;
    while(temp!=0){
        int last = temp % 10;
        rev = (rev * 10) + last;
        temp /= 10;
    }
    cout << rev << endl;
    if(rev == n) cout << "YES";
    else cout << "NO";
}