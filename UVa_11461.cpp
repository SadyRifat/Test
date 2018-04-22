#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long int a,b,root,number;
    while(1){
        cin >> a >> b;
        number = 0;
        if(a == 0 && b == 0) break;
        if(a > b){
            root = b;
            b = a;
            a = root;
        }

        for(int i=a; i<=b; i++){
            root = sqrt(i);
            if((root*root) == i) number++;
        }
        cout << number << endl;
    }
    return 0;
}
