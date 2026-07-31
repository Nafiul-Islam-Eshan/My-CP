#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        do{
            int last = n % 10;
            cout << last << " ";
            n/=10;
        }while (n!=0);
        cout << endl;
    }
}