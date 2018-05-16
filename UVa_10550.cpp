#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int start, pos1, pos2, pos3;

    while(1){
        cin >> start >> pos1 >> pos2 >> pos3;
        if(start==0 && pos1==0 && pos2==0 && pos3==0) break;

        int sum = 1080;
        if(start < pos1){
            sum += (40 - fabs(start - pos1))*9;
        }else{
            sum += (start - pos1)*9;
        }

        if(pos1 > pos2){
            sum += (40 - fabs(pos1 - pos2))*9;
        }else{
            sum += (pos2 - pos1)*9;
        }

        if(pos2 < pos3){
            sum += (40 - fabs(pos2 - pos3))*9;
        }else{
            sum += (pos2 - pos3)*9;
        }

        cout << sum << endl;
    }
    return 0;
}
