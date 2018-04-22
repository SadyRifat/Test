#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n,m,a,r,g,i,t;
    scanf("%d", &n);
    cin.ignore();

    while(n--){
        m=0, a=0, r=0, g=0, i=0, t=0;
        getline(cin, str);
        for(int j=0; j<str.length(); j++){
            switch(str[j]){
                case 'M':
                    m++;
                    break;
                case 'A':
                    a++;
                    break;
                case 'R':
                    r++;
                    break;
                case 'G':
                    g++;
                    break;
                case 'I':
                    i++;
                    break;
                case 'T':
                    t++;
                    break;
            }
        }
        int count = 0;
        while(1){
            if(m>0 && a>2 && r>1 && g>0 && i>0 && t>0){
                m -= 1; a -= 3;r -= 2;g -= 1;i -= 1;t -= 1;
                count++;
            }
            else{
                break;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
