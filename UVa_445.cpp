#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main()
{
    string str;
    int time = 0;
    while(getline(cin, str)){
        if(str.length() == 0) printf("\n");
        else{
            for(int i=0; i<str.length(); i++){
                if(str[i]>='1' && str[i] <= '9'){
                    time += (int)str[i]-48;
                }
                else if(str[i] == 'b'){
                    for(int j=0; j<time; j++){
                        printf(" ");
                    }
                    time = 0;
                }
                else if(str[i] == '!'){
                    printf("\n");
                }
                else{
                    for(int j=0; j<time; j++){
                        printf("%c", str[i]);
                    }
                    time = 0;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
