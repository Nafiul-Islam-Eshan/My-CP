#include<stdio.h>
typedef long long ll;

ll fact(int n){
    ll f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

ll sum(int n){
    ll sum =0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }    
    return sum;
}

ll sqSum(int n){
    ll sum =0;
    for (int i = 1; i <= n; i++)
    {
        sum += i*i;
    }    
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d! = %d\n",n, fact(n));
    printf("Sum(1 to %d) = %d\n",n, sum(n));
    printf("Square Sum(1 to %d) = %d\n",n, sqSum(n));
}