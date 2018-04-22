#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int m,p,n,i,j,minimum,arr[15000], sum,temp,result1,result2;

    while((cin >> n)){
        for(int k=0; k<n; k++){
            cin >> arr[k];
        }
        cin >> sum;
        int flag = 0;

        for(i=0; i<n-1; i++){
            for(j=i+1; j < n ; j++){
                if((arr[i]+ arr[j]) == sum){
                    minimum = fabs(arr[i] - arr[j]);
                    result1 = arr[i];
                    result2 = arr[j];
                    flag = 1;
                    break;
                }
            }
            if(flag == 1) break;
        }

        for(m=i+1; m<n-1; m++){
            for(p=m+1; p < n ; p++){
                if((arr[m]+ arr[p]) == sum){
                    temp = fabs(arr[m] - arr[p]);
                    if(temp < minimum){
                        minimum = temp;
                        result1 = arr[m];
                        result2 = arr[p];
                    }
                }
            }
        }

        if(result1 > result2){
            temp = result1;
            result1 = result2;
            result2 = temp;
        }
        cout << "Peter should buy books whose prices are " << result1 << " and " << result2 << "." << endl;
        cout << endl;
    }
    return 0;
}
