#include<iostream>
#include<cctype>
using namespace std;

int main(){
    char a;
    cin >> a;
    if (isalpha(a)){
        cout << "ALPHA" << endl;
        if (isupper(a)) cout << "IS CAPITAL" ;
        else if (islower(a)) cout << "IS SMALL" ;
    }
    else if (isdigit(a)) cout << "IS DIGIT";
}