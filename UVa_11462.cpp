#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[200000];
    long int n,i;
    while(1){
        cin >> n;
        if(n == 0) break;
        for(i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        for(i=0; i<n-1; i++){
            cout << arr[i] << " ";
        }
        cout << arr[i] << endl;
    }
    return 0;
}
