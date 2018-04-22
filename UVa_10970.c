#include<stdio.h>

int main()
{
    int m, n, pieces;
    while(scanf("%d %d", &m, &n)!= EOF){
        pieces = (m*n)-1;
        printf("%d\n",pieces);
    }
    return 0;
}
