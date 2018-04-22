#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    long long int bach, spin;
    int i=1;
    while(1){
        scanf("%lld %lld", &bach, &spin);
        if(bach==0 && spin==0) break;

        else if(bach==1 && spin>0){
            printf("Case %d: :-\\\n", i);
        }
        else if(bach <= spin){
            printf("Case %d: :-|\n", i);
        }
        else if(bach > spin){
            printf("Case %d: :-(\n", i);
        }

        i++;
    }
    return 0;
}
