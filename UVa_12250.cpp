#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int main()
{
    string str;
    int i=1;
    while(1){
        cin >> str;

        if(str == "ZDRAVSTVUJTE")
            printf("Case %d: RUSSIAN\n", i);
        else if(str == "HALLO")
            printf("Case %d: GERMAN\n", i);
        else if(str == "HELLO")
            printf("Case %d: ENGLISH\n", i);
        else if(str == "HOLA")
            printf("Case %d: SPANISH\n", i);
        else if(str == "CIAO")
            printf("Case %d: ITALIAN\n", i);
        else if(str == "BONJOUR")
            printf("Case %d: FRENCH\n", i);
        else if(str == "#")
            break;
        else
            printf("Case %d: UNKNOWN\n", i);

        i++;
    }
    return 0;
}
