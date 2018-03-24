#include<stdio.h>
int main()
{
    int b1,b2,b3,g1,g2,g3,c1,c2,c3,min,total;
    while(scanf("%d%d%d%d%d%d%d%d%d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)!=EOF)
    {
        total = b1+b2+b3+g1+g2+g3+c1+c2+c3;
        min = b1+c2+g3;
        char *str;
        str = "BCG";

        if(min < b1+g2+c3){
            str = "BGC";
            min = b1+g2+c3;
        }
        if(min < c1+b2+g3){
            str = "CBG";
            min = c1+b2+g3;
        }
        if(min < c1+g2+b3){
            str = "CGB";
            min = c1+g2+b3;
        }
        if(min < g1+b2+c3){
            str = "GBC";
            min = g1+b2+c3;
        }
        if(min < g1+c2+b3){
            str = "GCB";
            min = g1+c2+b3;
        }

        printf("%s %d\n",str,total-min);

    }
    return 0;
}
