#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#define PI acos(-1)
using namespace std;

int main()
{
    int a,b,c;
    double s, triangle, radius, area, area_triangle;
    while(cin>>a>>b>>c){
        s = (a+b+c) / 2.0;
        triangle = sqrt(fabs(s*(s-a)*(s-b)*(s-c)));
        radius = (triangle/s) * (triangle/s) * PI;
        area_triangle = triangle-radius;

        area = (a*b*c)/(4*triangle);
        area = PI * area *area;
        area = area - triangle;
        cout << fixed << setprecision(4) << area << " " << area_triangle << " " << radius << endl;
    }
    return 0;
}
