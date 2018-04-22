#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str[1002];
    string phone;
    int loop,num;
    int test = 1;

    scanf("%d", &loop);
    while(test<=loop){
        scanf("%d", &num);
        for(int i=0; i<num; i++){
            cin >> str[i];
        }
        cin >> phone;
        printf("Case %d:\n", test);
        int length = phone.length();

        for(int i=0; i<num; i++){
            int count = 0;
            for(int j=0; j<length; j++){
                if(phone[j] == str[i][j]){
                    count++;
                }
            }
            if(count==length || count+1 == length){
                cout << str[i] << endl;
            }
        }

        test++;
    }
    return 0;
}
