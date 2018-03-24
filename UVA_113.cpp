#include<stdio.h>
#include<math.h>

int main()
{
    double n,p,result;

    while(scanf("%lf", &n) != EOF){
        scanf("%lf", &p);
        result = pow(p,1.0/n);
        printf("%0.0lf\n",result);
    }
    return 0;
}
