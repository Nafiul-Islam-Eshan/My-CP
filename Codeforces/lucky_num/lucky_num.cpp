#include<iostream>
using namespace std;
int main(){
    int a, b;
    bool isPrinted = false;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        int temp = i;
        bool isLucky = true;
        while(temp != 0){
            int last = temp % 10;
            if((last!=7) && (last!=4)){
                isLucky = false;
                break;
            }
            temp /= 10;
        }
        if(isLucky) {
            cout << i << " ";
            isPrinted = true;
        }
    }
    if(!isPrinted) cout << -1;
    return 0;
}