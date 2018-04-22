#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int time, n, arr[100];
    int cap;

    cin >> time;
    int i=1;
    while(i<=time){
        cin >> n;
        for(int j=0; j<n; j++){
            cin >> arr[j];
        }
        cap = (n/2.0);

        cout << "Case " << i << ": " << arr[cap] << endl;
        i++;
    }
    return 0;
}
