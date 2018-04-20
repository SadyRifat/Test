#include<iostream>
using namespace std;

int main()
{
    long int n;
    while(1){
        cin >> n;
        if(n < 0) break;
        else{
            long int pieces = 1;
            for(long int i=1; i<=n; i++){
                pieces += i;
            }
            cout << pieces << endl;
        }
    }

    return 0;
}
