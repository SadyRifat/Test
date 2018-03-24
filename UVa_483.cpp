#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    int i,j,l;

    while(gets(str)){
        l = strlen(str);
        for(i=0; i<l; i++){
            if(str[i] == ' '){
                j = i-1;
                while(1){
                    if(str[j] == ' ' || j==-1) break;
                    printf("%c", str[j]);
                    j--;
                    if(str[j] == ' ' || j==-1) break;
                }
                printf(" ");
            }
            if(i == l-1){
                j = i;
                while(1){
                    if(str[j] == ' ' || j==-1) break;
                    printf("%c", str[j]);
                    j--;
                    if(str[j] == ' ' || j==-1) break;
                }
                printf("\n");
            }
        }
    }
    return 0;
}
