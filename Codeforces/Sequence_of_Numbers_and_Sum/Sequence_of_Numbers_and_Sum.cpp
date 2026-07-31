#include<iostream>
using namespace std;
int main(){
    while(true){
        int m, n;
        cin >> m >> n;
        int big = (m>n) ? m : n, 
            small = (m>n) ? n : m,
            sum = 0;
        if(big>=0 && small<=0) return 0;
        for (int i = small; i <= big; i++)
        {
            cout << i << " ";
            sum += i;
        }   
        cout << "sum =" << sum << endl;     
    }
}