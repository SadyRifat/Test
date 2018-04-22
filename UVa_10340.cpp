#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    char first[100000], second[100000];
    int f_len, s_len, check;
    while(cin >> first >> second){
        f_len = strlen(first);
        s_len = strlen(second);
        check = 0;

        for(int i=0; i<f_len; i++){
            for(int j=0; j<s_len; j++){
                if(first[i] == second[j]){
                    check++;
                    i++;
                }
            }
        }
        if(check == f_len){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
