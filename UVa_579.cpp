#include<stdio.h>
#include<math.h>

int main()
{
    int hh, mm;
    double time;
    while(1){
        scanf("%d:%d",&hh,&mm);
        if(hh == 0 && mm == 0) break;
        time = (30*hh) - (5.5*mm);
        time = fabs(time);
        if(time > 180) time = 360.0 - time;
        printf("%0.3lf\n",time);
    }
    return 0;
}
