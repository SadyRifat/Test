#include<stdio.h>
#include<math.h>

int main()
{
    int n, s, v, u;
    double long_path, short_path,temp;

    int i=1;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d%d%d", &s,&v,&u);
        if(v>=u || v==0) printf("Case %d: can't determine\n", i);
        else{
            short_path = s / (u*1.0);
            temp = sqrt(u*u - v*v);
            long_path = (s*1.0) / temp;
            temp = fabs(long_path - short_path);
            printf("Case %d: %0.3lf\n", i, temp);
        }
        i++;
    }
    return 0;

}
