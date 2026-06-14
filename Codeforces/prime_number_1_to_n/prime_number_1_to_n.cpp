#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool nums[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        nums[i] = true;
    }
    nums[0] = false;
    nums[1] = false;
    for (int i = 0; i < n + 1; i++)
    {
        if (nums[i] == true)
        {
            for (int j = (i + i); j < n + 1; j = j + i)
            {
                nums[j] = false;
            }
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        if (nums[i] == true)
        {
            printf("%d ", i);
        }
    }
}