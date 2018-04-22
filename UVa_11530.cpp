#include<iostream>
#include<string.h>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    int length,n,key;
    string temp;
    getline(cin,temp);
    stringstream(temp) >> n;
    int i=1;
    while(i<=n){
        key = 0;
        char input[150];
        getline(cin,temp);
        length = temp.length();
        for (int k = 0; k < length; k++)
        input[k] = temp[k];
        for(int j=0;j<length;j++){
            switch(input[j]){
                case 'a': {
                    key++;
                    break;
                }
                case 'b': {
                    key+=2;
                    break;
                }
                case 'c': {
                    key+=3;
                    break;
                }
                case 'd': {
                    key++;
                    break;
                }
                case 'e': {
                    key+=2;
                    break;
                }
                case 'f': {
                    key+=3;
                    break;
                }
                case 'g': {
                    key++;
                    break;
                }
                case 'h': {
                    key+=2;
                    break;
                }
                case 'i': {
                    key+=3;
                    break;
                }
                case 'j': {
                    key++;
                    break;
                }
                case 'k': {
                    key+=2;
                    break;
                }
                case 'l': {
                    key+=3;
                    break;
                }
                case 'm': {
                    key++;
                    break;
                }
                case 'n': {
                    key+=2;
                    break;
                }
                case 'o': {
                    key+=3;
                    break;
                }
                case 'p': {
                    key++;
                    break;
                }
                case 'q': {
                    key+=2;
                    break;
                }
                case 'r': {
                    key+=3;
                    break;
                }
                case 's': {
                    key+=4;
                    break;
                }
                case 't': {
                    key++;
                    break;
                }
                case 'u': {
                    key+=2;
                    break;
                }
                case 'v': {
                    key+=3;
                    break;
                }
                case 'w': {
                    key++;
                    break;
                }
                case 'x': {
                    key+=2;
                    break;
                }
                case 'y': {
                    key+=3;
                    break;
                }
                case 'z': {
                    key+=4;
                    break;
                }
                case ' ': {
                    key++;
                    break;
                }
            }
        }
    cout << "Case #" << i << ": " << key << endl;
    i++;
    }
    return 0;
}
