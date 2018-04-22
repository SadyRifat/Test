#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int test,n,k,p,sum;
    cin >> test;
    for(int i=1; i<=test; i++){
        cin >> n >> k >> p;
        sum = k + p;
        sum = sum % n;
        if(sum == 0)
           printf("Case %d: %d\n", i, n);
        else
            printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
