#include<stdio.h>
#include<string.h>

int main()
{
    char str[100000];
    int length,i;
    while(gets(str)){
        length = strlen(str);
        for(i=0;i<length;i++){
            printf("%c",str[i]-7);
        }
        printf("\n");
    }
    return 0;
}
