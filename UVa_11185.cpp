#include<iostream>
#include<stdio.h>
using namespace std;

void convert_ternary(int n){
    if(n == 0){
        return;
    }
    else{
        convert_ternary(n/3);
        printf("%d", n%3);
    }
}

int main()
{
    long long int n,i,j;
    while(1){
        cin >> n;
        if(n < 0) break;
        if(n == 0)
            printf("0");
        else
            convert_ternary(n);
        printf("\n");
    }
    return 0;
}
