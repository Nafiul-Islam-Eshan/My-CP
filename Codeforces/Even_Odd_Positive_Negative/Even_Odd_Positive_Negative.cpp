#include<iostream>
using namespace std;
int main(){
    int size, even=0, odd=0, positive=0, negative=0;
    cin >> size;
    int nums[size];
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    for (int i = 0; i < size; i++)
    {
        if(nums[i]>0) positive++;
        if(nums[i]<0) {
            negative++;
            nums[i] *= -1;
        }
        if(nums[i]%2 == 1) odd++;
        if(nums[i]%2 == 0) even++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
}