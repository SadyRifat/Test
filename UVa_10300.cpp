#include<iostream>
using namespace std;

int main()
{
    long long int n,m,a,b,c,cases;
    int j=0;
    cin >> n;
    while(j<n){
            long long int result = 0;
            cin >> cases;
        for(int i=0; i<cases; i++){
            cin >> a >> b >> c;
            result += (a*c);
        }
        cout << result << endl;
        j++;
    }
    return 0;
}
