#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    unsigned int bulb, temp;

    while(1){
        scanf("%u", &bulb);
        if(bulb == 0) break;
        temp = sqrt(bulb);

        if(temp*temp == bulb){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}
