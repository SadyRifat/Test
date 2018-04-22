#include<stdio.h>

int main()
{
    int n,temp,arr[1500],count,i,j;
    while(scanf("%d",&n) != EOF){
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        count =0;
        for(i=0; i<n-1; i++){
            for(j=0; j<n-i-1; j++){
                if(arr[j] > arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    count++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", count);
    }
    return 0;
}
