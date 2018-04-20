#include<iostream>
using namespace std;

int main()
{
    long int a, b, carry, number, flag, temp;
    while(1){
            flag = 0;
            carry = 0;
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        if(a < b){
            temp = a;
            a = b;
            b = temp;
        }
        while(a != 0){
            if(flag == 0)
                number = (a%10) + (b%10);
            else
                number = (a%10) + (b%10) + 1;

            if(number > 9){
                carry ++;
                flag = 1;
            }
            else flag = 0;
            a /= 10;
            b /= 10;
        }
    if(carry == 0)
        cout << "No carry operation." << endl;
    else if (carry == 1)
        cout << "1 carry operation." << endl;
    else
        cout << carry << " carry operations." << endl;
    }

    return 0;
}
