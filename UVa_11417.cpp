#include<iostream>
using namespace std;

int GCD(int i, int j){
    while(i!=j)
    {
        if(i > j)
            i -= j;
        else
            j -= i;
    }
    return i;
}

int main()
{
    int n,g;
    while(1){
        cin >> n;
        if(n == 0) break;

        g = 0;
        for(int i=1; i<n; i++){
            for(int j=i+1; j<=n; j++){
                g+=GCD(i,j);
            }
        }
        cout << g << endl;
    }
    return 0;
}
