#include<stdio.h>
#include<string.h>

int main()
{
    char str[100000];
    int length,i,count;
    while(gets(str)){
        length = strlen(str);
        for(i=0;i<length;i++){
            if(str[i]=='"'){
                count++;
                if(count%2 == 1) printf("``");
                else printf("''");
            }
            else printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
