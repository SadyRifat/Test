#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char temp[10000];
    while(gets(temp)){
        int i;
        int l = strlen(temp);
        for(i=0;i<l;i++){
            temp[i] = toupper(temp[i]);
        }
        i=0;
        while(temp[i]){
            if(!(temp[i]<=90 && temp[i]>=65)){
                temp[i] = ' ';
            }
            i++;
        }

        int count =0;

        for(i=0; i<l; i++){
            if((temp[i]<=90 && temp[i]>=65)){
                i++;
                while(1){
                    if(temp[i] == ' '){
                        count++;
                        break;
                    }
                    else i++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
