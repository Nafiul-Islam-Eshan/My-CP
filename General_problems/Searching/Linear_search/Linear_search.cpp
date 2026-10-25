#include<iostream>
#include<vector>
using namespace std;

void linear_search(){

}

int main(){
    vector<int> numbers;
    int a, n ;

    cout << "How many numbers :";
    cin >> n;

    cout << "Enter the numbers";

    for (int i = 0; i < n; i++) // Input
    {
        cin >> a;
        numbers.push_back(a);
    }

    // target
    int target;
    cout << "Enter which numbers you are searching : ";
    cin >> target;

    // searching and showing target
    for (int i = 0; i < n; i++)
    {
        if(target == numbers[i]){
            cout << target << " found at " << i+1 << "th position";
            return 0;
        }
    }
    
    cout << target << " not found";
    
}