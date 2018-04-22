#include<stdio.h>
int main()
{
    int count,n, mark[1500],sum;
    int stu;
    double percent,average;
    scanf("%d",&count);
    int i,j=0;
    while(j<count){
            sum=0;
            stu = 0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&mark[i]);
            sum += mark[i];
        }

        average = sum / n;
        for(i=0;i<n;i++){
            if(average < mark[i]){
                stu++;
            }
        }
        percent = (stu/(n*1.0))*100.0;
        printf("%0.3lf",percent);
        printf("%%\n");
        j++;
    }
    return 0;
}
