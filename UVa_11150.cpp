#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int cola, number,remainder;

    while(cin >> number){
        cola = number;
        while(number>=3){
            remainder = number % 3;
            number /= 3;
            cola += number;
            number += remainder;
        }
        if(number == 2)
            cola++;
        printf("%d\n", cola);
    }
    return 0;
}
