#include<stdio.h>

int main()
{
    double value, constant = 1.0673956817111818692592637626711;

    while(scanf("%lf", &value) != EOF){
        printf("%0.10lf\n", (value*constant));
    }

    return 0;
}
