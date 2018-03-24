#include<iostream>
using namespace std;

int main()
{
    int arr[150];
    int n,index,time;
    cin >> n;
    for(int k=0; k<n; k++){
        time = 0;
        cin >> index;
        for(int l=0; l<index; l++){
            cin >> arr[l];
        }

        for(int i=0; i<index-1; i++){
            for(int j=0; j < (index-i-1) ; j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    time ++;
                }
            }
        }
        cout << "Optimal train swapping takes " << time << " swaps." << endl;
    }
    return 0;
}
