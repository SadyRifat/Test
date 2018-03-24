#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n, m, sonar;
    int count;
    scanf("%d", &count);
    while(count--){
        scanf("%d%d", &n, &m);
        sonar = (n/3) * (m/3);
        printf("%d\n", sonar);
    }
    return 0;
}
