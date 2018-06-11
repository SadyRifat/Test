#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    string one = "one";
    scanf("%d", &test);
    while(test--){
        string word;
        cin >> word;
        int count=0;
        if(word.length() == 5){
            printf("3\n");
        }
        else{
            for(int i=0; i<3; i++){
                if(word[i] == one[i]) count++;
            }
            if(count >= 2) printf("1\n");
            else printf("2\n");
        }
    }
    return 0;
}
