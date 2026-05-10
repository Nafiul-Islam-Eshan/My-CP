#include<iostream>
using namespace std;
int main()
{
    int d;
    cin >> d;
    int year = d / 365;
    int month = (d % 365) / 30;
    int day = (d % 365) % 30;
    cout << year << " years\n" << month << " months\n" << day << " days\n" ;
}