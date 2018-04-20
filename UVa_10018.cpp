#include<iostream>
using namespace std;

int main()
{
    long long int number, rev, temp, add;
    int n,arr[100],k,l,time;

    cin >> n;
    for(int i=0; i < n; i++){
            time = 0;
        cin >> number;

        while(1){time ++;
            temp = number;
            rev = 0;
            while(temp != 0){
                rev *= 10;
                rev += (temp % 10);
                temp /= 10;
            }

            add = number + rev;
            temp = add;
            number =add;
            for(k=0; temp!=0; k++){
                arr[k] = (temp % 10);
                temp /= 10;
            }
            k--;
            l=0;
            while(((l-k)!=1)){
                    if(l==k) break;
                if(arr[l] != arr[k]) break;
                k--;
                l++;
            }
            if(arr[l] == arr[k]) break;

        }
        cout << time << " " << number << endl;
    }
    return 0;
}
