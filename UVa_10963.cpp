#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int test, n, y2, y1, difference;
    scanf("%d", &test);
    while(test--){
        int flag = 1;
        scanf("%d", &n);
        scanf("%d%d", &y1, &y2);
        int difference = y2-y1;
        for(int i=0; i<n-1; i++){
            scanf("%d%d", &y1, &y2);
            if(difference != (y2-y1)){
                flag = 0;
            }
        }
        if(flag == 1){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
        if(test != 0)
            printf("\n");
    }
    return 0;
}
