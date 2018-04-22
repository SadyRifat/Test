#include<iostream>
using namespace std;

int main()
{
    int n,time,number,loop=1;
    while(1){
        cin >> n;
        if(n < 0) break;
        time = 1;
        number = 0;

        while(time < n){
            time *= 2;
            number ++;
        }
        cout << "Case " << loop << ": " << number << endl;
        loop ++;
    }
    return 0;
}
