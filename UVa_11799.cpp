#include<iostream>
using namespace std;

int main()
{
    int max,n,length,arr[10000];
    cin >> n;
    int i = 1;
    while(i <= n){
        cin >> length;
        for(int j=0; j<length; j++){
            cin >> arr[j];
        }
        max = arr[0];
        for(int j=1; j<length; j++){
            if(max < arr[j]) max = arr[j];
        }
        cout << "Case " << i << ": " << max << endl;
        i++;
    }
    return 0;
}
