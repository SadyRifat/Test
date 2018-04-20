#include<iostream>
using namespace std;

int main()
{
    int n,ave,moves,time=1;
    int arr[150];
    while(1){
        cin >> n;
        if(n == 0) break;
        else{
            int total = 0;
            for(int i=0; i<n; i++){
                cin >> arr[i];
                total += arr[i];
            }
            ave = total / n;
            moves = 0;
            for(int i=0; i< n; i++){
                if(arr[i] > ave) moves += (arr[i] - ave);
            }
            cout << "Set #" << time << "\nThe minimum number of moves is " << moves << "." << endl << endl;
            time ++;
        }
    }
    return 0;
}
