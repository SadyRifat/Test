#include<iostream>

using namespace std;

int main()
{
    long int a[3],temp;
    while(1)
    {
        cin >> a[0] >> a[1] >> a[2];
        if(a[0]==0 && a[1]==0 && a[2]==0) break;

        for(int i=0; i<2; i++){
            for(int j=0; j < (3-i-1) ; j++){
                if(a[j] > a[j+1]){
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }

        temp = (a[0]*a[0]) + (a[1]*a[1]);
        if((a[2]*a[2]) == temp) cout << "right" << endl;
        else cout << "wrong" << endl;
    }
    return 0;
}
