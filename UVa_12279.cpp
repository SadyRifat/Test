#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test, emotion, Case = 1;
    while(1){
        int count = 0;
        scanf("%d", &test);
        if(test == 0) break;
        for(int i=1; i<=test; i++){
            scanf("%d", &emotion);
            if(emotion == 0) count--;
            else count++;
        }
        printf("Case %d: %d\n", Case, count);
        Case++;
    }
    return 0;
}
