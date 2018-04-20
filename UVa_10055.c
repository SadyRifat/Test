#include<stdio.h>

int main()
{
    long long int a,b,result;

    while(scanf("%lld%lld", &a, &b) != EOF){
        if(a > b){
            result = a - b;
            printf("%lld\n", result);
        }
        else{
            result = b - a;
            printf("%lld\n", result);
        }
    }
    return 0;
}
