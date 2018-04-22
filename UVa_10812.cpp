#include<iostream>
using namespace std;

int main()
{
    int n;
    long long int a,b,largest,lowest;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a >> b;
        if(b>a || ((a-b)%2== 1)){
            cout << "impossible" << endl;
        }
        else{
            largest = (a+b)/2;
            lowest = (a-b)/2;

            cout << largest << " " << lowest << endl;
        }
    }
    return 0;
}
