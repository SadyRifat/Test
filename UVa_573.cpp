#include<iostream>
using namespace std;

int main()
{
    int day;
    double initial,climb,after,final,hight,slip,energy;

    while(1){
        day = 1;
        int flag=0;
        cin >> hight >> climb >> slip >> energy;
        if(hight==0 && climb==0 && slip==0 && energy==0) break;
        energy = climb * (energy/100);
        final = 0;
        while(final >= 0){
            if(day ==1){
                after = climb;
                if(after >= hight){
                    flag = 1;
                    break;
                }
                final = after - slip;
            }
            else {
                initial = final;
                climb -= energy;
                if(climb < 0) climb = 0;
                after = initial + climb;
                if(after >= hight){
                    flag = 1;
                    break;
                }
                final = after - slip;
            }
            day ++;
        }
        if(flag == 1) cout << "success on day " << day <<  endl;
        else cout << "failure on day " << day-1 << endl;
    }
    return 0;
}
