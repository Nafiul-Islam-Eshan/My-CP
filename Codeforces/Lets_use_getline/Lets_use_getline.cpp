#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int i = 0;
    while (s[i] != '\\')
    {
        cout << s[i];
        i++;
    }
      
}