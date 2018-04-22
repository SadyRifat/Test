#include<iostream>
using namespace std;

int main()
{
    int n, a[3],b,c, temp;
    cin >> n;
    int k=0;
    while(k<n){
        cin >> a[0] >> a[1] >> a[2];
        for(int i=0; i<2; i++){
            for(int j=0; j<2-i; j++){
                if(a[j]>a[j+1]){
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
        if((a[0]+a[1]) > a[2]) cout << "OK" << endl;
        else cout << "Wrong!!" << endl;

        k++;
    }
    return 0;
}
