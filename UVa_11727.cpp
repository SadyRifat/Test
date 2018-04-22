#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,x,y,z,average,minimum,temp,result;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x >> y >> z;

        average = (x+y+z)/3;
        minimum = fabs(x-average);
        result = x;
        temp = fabs(y-average);

        if(minimum > temp){
            minimum = temp;
            result = y;
        }

        temp = fabs(z-average);
        if(minimum > temp){
            minimum = temp;
            result = z;
        }

        cout << "Case " << i << ": " << result << endl;

    }

    return 0;
}
