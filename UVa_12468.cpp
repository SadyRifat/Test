#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,temp;
    while(1){
        cin >> a >> b;
        if(a<0 && b < 0) break;
        temp = fabs(a-b);
        if(temp > 50) temp = 100-temp;
        cout << temp << endl;
    }
    return 0;
}
