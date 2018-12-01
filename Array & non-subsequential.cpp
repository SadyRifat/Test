#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n, m;
    while(cin>>n){
        int arr1[n];
        for(int i=0; i<n; i++){
            cin >> arr1[i];
        }
        cin >> m;
        int arr2[m];
        for(int i=0; i<m; i++){
            cin >> arr2[i];
        }

        int count = 0, j;
        for(int i=0; i<=n-m; i++){
            int temp = i;
            for(j=0; j<m; j++){
                if(arr1[temp] != arr2[j]){
                    break;
                }
                else{
                    temp++;
                }
            }
            if(j == m){
                count++;
                i += m-1;
            }
        }
        int result = n-(m*count);
        cout << result << endl;
    }

    return 0;
}
