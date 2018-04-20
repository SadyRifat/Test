#include<bits/stdc++.h>
using namespace std;

int main()
{
    int loop,test;
    int arr[30000];
    scanf("%d", &loop);

    while(loop--){
        long long int sum = 0;
        scanf("%d", &test);
        for(int i=0; i<test; i++){
            scanf("%d", &arr[i]);
        }
        sort(arr, arr+test);
        int median = arr[test/2];

        for(int i=0; i<test; i++){
            sum += fabs(median - arr[i]);
        }
        printf("%lld\n", sum);
    }
    return 0;
}
