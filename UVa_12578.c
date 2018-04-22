#include<stdio.h>

int main()
{
    double length, width, radius, n, len_area, rad_area;
    double PI = 3.14159265358979323846264338327950288419716939937510;
    scanf("%lf", &n);
    int i=0;
    while(i<n){
        scanf("%lf", &length);
        radius = length / 5;
        width = (length / 10) * 6;
        rad_area = (PI * radius * radius);
        len_area = (length * width) - rad_area;

        printf("%0.2lf %0.2lf\n", rad_area, len_area);
        i++;
    }
    return 0;
}
