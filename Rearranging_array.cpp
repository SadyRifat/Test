#include<stdio.h>
using namespace std;

int main()
{
    long long int test, size, value;

    scanf("%lld", &test);
    while(test--){
        scanf("%lld", &size);
        long long int arr1[size], arr2[size];
        for(long int i=0; i<size; i++){
            scanf("%lld", &arr1[i]);
        }
        scanf("%lld", &value);

        long long int j = size;
        for(long int i=size; i>=0; i--){
            if(arr1[i] != value){
                arr2[j] = arr1[i];
                j--;
            }
        }
        for(long long int i=j; i>=0; i--){
            arr2[i] = 1;
        }

        for(long long int i=0; i<size; i++){
            printf("%lld ", arr2[i]);
        }
        printf("\n");
    }

    return 0;
}
