#include<iostream>
using namespace std;
///Very poor thinking for this code
int main()
{
    int n, zero, one, two, three, four, five, six, cheak;
    int seven, eight, nine, container, number;
    cin >> n;
    int i = 0;
    while(i < n){
        zero=0, one=0, two=0, three=0, four=0, five=0, six=0,seven=0, eight=0, nine=0 ;
        cin >> number;
        int container = 1;
        while(container <= number){
            int temp = container;
            while(temp != 0){
                    cheak = temp % 10;
                switch(cheak){
                    case 0:{
                        zero++;
                        break;
                    }case 1:{
                        one++;
                        break;
                    }case 2:{
                        two++;
                        break;
                    }case 3:{
                        three++;
                        break;
                    }case 4:{
                        four++;
                        break;
                    }case 5:{
                        five++;
                        break;
                    }case 6:{
                        six++;
                        break;
                    }case 7:{
                        seven++;
                        break;
                    }case 8:{
                        eight++;
                        break;
                    }case 9:{
                        nine++;
                        break;
                    }
                }
            temp /= 10;
            }
        container++;
        }
        cout << zero << " " << one << " " << two << " " << three << " ";
        cout << four << " " << five << " " << six << " " << seven << " ";
        cout << eight << " " << nine << endl;
        i++;
    }
    return 0;
}
