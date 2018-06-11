#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int test, length, weight, height;
    scanf("%d", &test);
    for(int i=1; i<=test; i++){
        scanf("%d %d %d", &length, &weight, &height);
        if(length<=20 && weight<=20 && height<=20){
            printf("Case %d: good\n", i);
        }else{
            printf("Case %d: bad\n", i);
        }
    }
    return 0;
}
