#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test, num;
    int arr[110];
    scanf("%d", &test);
    while(test--){
        scanf("%d", &num);
        for(int i=0; i<num; i++){
            scanf("%d", &arr[i]);
        }
        sort(arr, arr+num);
        int result = (arr[num-1] - arr[0])*2;
        printf("%d\n", result);
    }
    return 0;
}
