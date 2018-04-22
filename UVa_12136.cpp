#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int test, hh,mm;
    double o_start, o_end, w_start, w_end;
    int i = 1;
    cin >> test;
    while(i<=test){
        scanf("%d:%d", &hh, &mm);
        w_start = hh + (mm * 0.01);
        scanf("%d:%d", &hh, &mm);
        w_end = hh + (mm * 0.01);
        scanf("%d:%d", &hh, &mm);
        o_start = hh + (mm * 0.01);
        scanf("%d:%d", &hh, &mm);
        o_end = hh + (mm * 0.01);

        if(w_start <= o_start && w_end >= o_start)
            printf("Case %d: Mrs Meeting\n",i);
        else if(w_start <= o_end && w_end >= o_end)
            printf("Case %d: Mrs Meeting\n",i);
        else if(o_start <= w_start && w_end <= o_end)
            printf("Case %d: Mrs Meeting\n",i);
        else
            printf("Case %d: Hits Meeting\n",i);

        i++;
    }
    return 0;
}
