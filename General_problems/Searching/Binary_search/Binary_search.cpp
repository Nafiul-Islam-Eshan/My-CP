#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void binary_search(){

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

    sort(numbers.begin(), numbers.end());
    
    int start=0, end=n-1 ,target, foundPosition=-1 ;

    cout << "Enter which number you are searching : ";
    cin >> target;

    while (start <= end )
    {
        int mid=(start+end)/2;

        if(target == numbers[mid]){
            foundPosition = mid+1;
            break;
        }
        else if(target < numbers[mid])
        {
            end = mid -1 ;
        }
        else{
            start = mid + 1 ;
        }
    }

    if(foundPosition==-1)
    {
        cout << target <<  "Not found";
    }else
    {
        cout << target << " found at " << foundPosition << "th position";
    }
    
    

    
}