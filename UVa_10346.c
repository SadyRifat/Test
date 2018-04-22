#include<stdio.h>

int main()
{
    long long int n,k,add,temp;
    while(scanf("%lld %lld",&n,&k) != EOF){
            add = n;
        while(n >= k){
            temp = (n / k);
            add += temp;
            n = temp + (n%k);
        }
    printf("%lld\n", add);
    }
    return 0;
}
