#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long int t,n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;
        n = fabs(n);
        n /= 10;
        n %= 10;
        cout << n << endl;
    }
    return 0;
}
