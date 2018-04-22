#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    int value;
    while((cin>>value)){
        long long int sum = 0;
        for(int i=1; i<=value; i++){
            sum += (i*i*i);
        }
    printf("%lld\n",sum);
    }
    return 0;
}
