#include<iostream>
using namespace std;
int main()
{
    int x;
    while (true)
    {
        cin >> x;
        if(x==1999){
            cout << "Correct" << endl;
            return 0;
        }
        else cout << "Wrong" << endl;
    }   
}