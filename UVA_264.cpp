#include<stdio.h>
int main()
{
    int count,i,j,numerator,down,flag=0,number;

    while(scanf("%d", &number) != EOF){
        i = 1;
        count = 0;
        flag = 0;
        while(1){
            if((i%2)==0){
                numerator = 1;
                denominator = i;
                for(j=1; j<=i; j++){
                    count++;
                    if(count == number){
                        flag = 1;
                        break;
                    }
                    else {
                        numerator++;
                        denominator--;
                    }
                }
            }
            if((i%2)==1){
                numerator=i;
                denominator = 1;
                for(j=1;j<=i; j++){
                    count++;
                    if(count == number){
                        flag = 1;
                        break;
                    }
                    else{
                        numerator--;
                        denominator++;
                    }
                }
            }
            i++;
            if(flag == 1){
                printf("TERM %d IS %d/%d\n", number,numerator,denominator);
                break;
            }
        }
    }
    return 0;
}
