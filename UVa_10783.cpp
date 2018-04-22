#include<iostream>
using namespace std;

int main()
{
    int n, a,b;
    cin >> n;

    for(int i=1; i<=n; i++){
        cin >> a >> b;
        int sum = 0;
        for(int j=a; j<=b; j++){
            if(j%2 == 1) sum += j;
        }
        cout << "Case " << i << ": " << sum << endl;
    }

    return 0;
}
