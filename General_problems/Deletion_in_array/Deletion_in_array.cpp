#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Number of element : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int deleteElementIndex;
    cout << "Enter index for deleting element : ";
    cin >> deleteElementIndex;
    
    for (int i = deleteElementIndex; i < n; i++)
    {
        arr[i] = arr[i+1];
    }


    for (int i = 0; i < n-1; i++)
    {
        cout << arr[i] << ' ';
    }
    
}