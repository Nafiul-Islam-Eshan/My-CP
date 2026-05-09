#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char c;
    cin >> c;
    if (isupper(c)) cout << (char) tolower(c);
    else if (islower(c)) cout << (char) toupper(c);
    return 0;
}