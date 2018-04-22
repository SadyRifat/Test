#include<iostream>
using namespace std;

int main()
{
    int n,arr[100],high,low,t;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> t;
        high = 0; low = 0;
        for(int j=0; j<t; j++){
            cin >> arr[j];
        }
        for(int k=0; k<t-1; k++){
            if(arr[k] < arr[k+1]) high++;
            else if(arr[k] > arr[k+1]) low++;
        }
        cout << "Case " << i << ": " << high << " " << low << endl;
    }
    return 0;
}
