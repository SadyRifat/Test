#include<bits/stdc++.h>
int main()
{
    int i,j,temp,n,diff;
    while(scanf("%d",&n) != EOF){
            int input[3000], arr[3000];
            int flag = 1;
        for(i=0; i<n; i++){
            scanf("%d", &input[i]);
        }
        for(i=0;i<n-1;i++){
            arr[i] = fabs(input[i] - input[i+1]);
        }

        sort(arr, arr+n);

        for(i=0;i<n-1;i++){
            if(arr[i] != i+1){
                flag = 0;
                break;
            }
        }

        if(flag == 1) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
