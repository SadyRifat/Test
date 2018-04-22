#include<iostream>
using namespace std;

int main()
{
    int number, point1, point2, x,y;
    while(1){
        cin >> number;
        if(number == 0) break;
        cin >> point1 >> point2;
        for(int i=0; i<number; i++){
            cin >> x >> y;
            x -= point1;
            y -= point2;
            if(x==0 || y==0) cout << "divisa" << endl;
            else if(x>0 && y>0) cout << "NE" << endl;
            else if(x<0 && y>0) cout << "NO" << endl;
            else if(x<0 && y<0) cout << "SO" << endl;
            else if(x>0 && y<0) cout << "SE" << endl;
        }
    }
    return 0;
}
