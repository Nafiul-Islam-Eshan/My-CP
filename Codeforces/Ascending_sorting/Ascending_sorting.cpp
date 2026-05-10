#include<iostream>
using namespace std;
int main()
{
    int a, b, c, temp;
    cin >> a >> b >> c;
    int nums[3] = { a , b ,c};
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;  
    }
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    } 
    cout << a << endl << b << endl << c << endl << endl ;   
    cout << nums[0] << endl << nums[1] << endl << nums[2];   
    return 0; 
}