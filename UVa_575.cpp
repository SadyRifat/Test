#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    long long int sum, temp, i, len;
    while(1){
        cin >> str;
        if(str == "0"){
            break;
        }
        sum = 0;
        len = str.length();
        i=0;
        while(str[i]){
            temp = str[i] - 48;
            sum += temp * (pow(2, len)-1);
            len--;
            i++;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
