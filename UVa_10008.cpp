#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int count, arr[100];
    for(int i=60; i<100; i++) arr[i] = 0;
    scanf("%d", &count);
    cin.ignore();

    while(count--){
        getline(cin, str);
        std::transform(str.begin(), str.end(), str.begin(), ::toupper);
        for(int i=0; i<str.length(); i++){
            if(str[i]>='A' && str[i]<='Z'){
                int temp = str[i];
                arr[temp]++;
            }
        }
    }

    int cp[26], j=0;
    for(int i=65; i<91; i++, j++){
        cp[j] = arr[i];
    }
    sort(cp, cp+26);

    for(int i=25; i>=0; i--){
        for(int k=65; k<91; k++){
            if(cp[i]==arr[k] && arr[k]!=0){
                printf("%c %d\n", k, arr[k]);
                arr[k] = 0;
                break;
            }
        }
    }
    return 0;
}
