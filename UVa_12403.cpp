#include<iostream>
using namespace std;

int main()
{
    int n;
    long long int amount, sum;
    string str;
    cin >> n;
    sum = 0;
    for(int i=1; i<=n; i++){
        cin >> str;
        if(str == "donate"){
            cin >> amount;
            sum += amount;
        }
        else {
            cout << sum << endl;
        }
    }
    return 0;
}
