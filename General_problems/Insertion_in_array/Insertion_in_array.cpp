#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Number of element : ";
    cin >> n;

    int arr[n+1];
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int newElement, newElementIndex;
    cout << "Enter New Element : ";
    cin >> newElement;
    cout << "Enter Index for new element : ";
    cin >> newElementIndex;
    
    for (int i = n; i >= newElementIndex; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[newElementIndex] = newElement;



    for (int i = 0; i < n+1; i++)
    {
        cout << arr[i] << ' ';
    }
    
}