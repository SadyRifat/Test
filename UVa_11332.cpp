#include<iostream>
using namespace std;

int main()
{
    long long int n,temp,mod,sum;

    while(1){
        cin >> n;
    if(n < 0 || n==0){
        break;
    }
    else{
        while((n/10) != 0){
            mod = n;
            sum = 0;
                while((mod/10) != 0){
                    temp = mod%10;
                    mod = mod/10;
                    sum += temp;
                }
            n = sum + (mod%10);
            }
        cout << n << endl;
        }
    }
    return 0;
}
