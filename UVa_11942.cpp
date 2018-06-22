#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int test;
    int arr[15];
    scanf("%d", &test);
    printf("Lumberjacks:\n");

    while(test--){
        int pos=0, neg=0, flag=1;
        for(int i=0; i<10; i++){
            scanf("%d", &arr[i]);
        }
        for(int i=0; i<9; i++){
            if(arr[i]-arr[i+1] > 0)
                pos = 1;
            else
                neg = 1;
            if(pos==1 && neg==1){
                printf("Unordered\n");
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("Ordered\n");
    }
    return 0;
}
