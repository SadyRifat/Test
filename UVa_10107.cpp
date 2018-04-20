#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10002], i=0;
    int temp, res;

    while(cin >> arr[i]){
        i++;
        sort(arr, arr+i);
        temp = i/2;
        if(i%2 == 1){
            printf("%d\n", arr[temp]);
        }
        else{
            res = (arr[temp-1]+arr[temp]) / 2;
            printf("%d\n", res);
        }
    }
    return 0;
}
