#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[10000];
    int length, max_len = 0,i;
    string max_word;
    while(1){
            length = 0;
            string max;
        cin >> str;
        if(strcmp(str, "E-N-D") == 0) break;
//        while(str[i]){
//            if(str[i]=='-') {
//                length ++;
//                max += str[i];
//            }
//            else if(str[i]>'A' && str[i]<'Z'){
//                length ++;
//                str[i] += 32;
//                max += str[i];
//            }
//            else if(str[i]>'a' && str[i] <'z'){
//                length ++;
//                max += str[i];
//            }
//        }
        if(length > max_len){
            max_len = length;
            max_word = max;
        }
    }
    cout << max_word << endl;
    return 0;
}
