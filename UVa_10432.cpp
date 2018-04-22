#include<bits/stdc++.h>
using namespace std;

int main()
{
    double num, radius;
    double area;
    double PI = acos(-1);
    while((cin >> radius >> num)){
        area = (num*radius*radius/2) * sin (2*PI/num);
        printf("%0.3lf\n", area);
    }
    return 0;
}
