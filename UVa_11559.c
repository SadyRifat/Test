#include<stdio.h>
int main()
{
    int stu, budget, hotel, n,i;
    int price, cost,j, min,flag;
    int bed[2000];
    while(scanf("%d%d%d%d",&stu,&budget,&hotel,&n) != EOF){
        cost =0;
        flag =0;
        for(j=0;j<hotel;j++){
            scanf("%d",&price);
            for(i=0; i<n; i++){
                scanf("%d",&bed[i]);
            }

            for(i=0;i<n;i++){
                if(bed[i] >= stu) break;
            }
            if(i < n ){
                min = stu * price;
                if(min <= budget){
                    if(flag!=0){
                        if(cost > min) cost = min;
                    }
                    if(flag==0) cost = min;
                    flag = 1;
                }
            }
        }
        if(cost == 0) printf("stay home\n");
        else printf("%d\n",cost);

    }
    return 0;
}
