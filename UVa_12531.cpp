#include<iostream>
using namespace std;

int main()
{
    int degree;
    while(cin >> degree){
        if((degree%6) == 0) cout << "Y" << endl;
        else cout << "N" << endl;
    }
    return 0;
}
