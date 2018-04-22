#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[10000],arr2[10000];
    int n,count = 0,line1,line2,i,result;
    cin >> n;
    while(count < n){
        cin >> line1 >> line2;
        for(i=0;i<line1;i++) cin >> arr1[i];
        for(i=0;i<line2;i++) cin >> arr2[i];

        sort(arr1,arr1+line1);
        sort(arr2,arr2+line2);

        int same=0, c=0, d=0;
        while(c<line1 && d<line2){
            if(arr1[c] == arr2[d]){
                c++;
                d++;
                same++;
            }
            else if(arr1[c] > arr2[d]) d++;
            else c++;
        }
        result = (line1+line2) - (2*same);
        cout << result << endl;
        count++;
    }
    return 0;
}
