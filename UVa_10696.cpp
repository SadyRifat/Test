#include<iostream>
using namespace std;


int main()
{
    int n,m;
    while(1){
        cin >> m;
        n = m;
        if(n == 0) break;
        else{
            if(n <= 100){
                n = 91;
            }
            else{
                n -= 10;
            }
        }
        cout << "f91(" << m << ") = " << n << endl;
    }
    return 0;
}
