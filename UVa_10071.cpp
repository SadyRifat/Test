#include<stdio.h>

int main()
{
    int a , b;
    long int result;
    while(scanf("%d%d",&a,&b)!= EOF){
        result = 2*a*b;
        printf("%d\n", result);
    }
    return 0;
}
