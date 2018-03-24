#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int number,sum,count,flag = 1;

    while(1){
        cin >> number;
        if(number == 0) break;
        sum = 1;
        count = number/2;
        for(int i=2; i<=count; i++){
            if(number%i == 0) sum+=i;
        }
        if(flag == 1){
            cout << "PERFECTION OUTPUT" << endl;
            flag = 0;
        }
        if(number == 6 || number == 28 || number == 496 || number == 8128) cout << setw(5) << number << "  PERFECT" << endl;
        else if(number == 1) cout << setw(5) << number << "  DEFICIENT" << endl;
        else if(number > sum) cout << setw(5) << number << "  DEFICIENT" << endl;
        else if(number < sum) cout << setw(5) << number << "  ABUNDANT" << endl;
    }
    cout << "END OF OUTPUT" << endl;
    return 0;
}
