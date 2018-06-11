#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int test;
    string str;
    scanf("%d", &test);
    while(test--){
        cin >> str;
        int len = str.length();
        if(str[len-2]=='3' && str[len-1]=='5'){
            printf("-\n");
        }
        else if(str[0]=='1' && str[1]=='9' && str[2]=='0'){
            printf("?\n");
        }
        else if(str[0]=='9' && str[len-1]=='4'){
            printf("*\n");
        }
        else{
            printf("+\n");
        }
    }
    return 0;
}
