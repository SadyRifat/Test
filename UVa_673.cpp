#include<iostream>
#include<stack>
#include<string>
#include<stdio.h>

using namespace std;

int main()
{
    int loop;
    scanf("%d", &loop);
    cin.ignore();

    while(loop--){
        string str;
        getline(cin, str);

        stack<char>stk;

        for(int i=0; i<str.length(); i++){
            if(!stk.empty() && str[i]==')' && stk.top()=='('){
                stk.pop();
            }
            else if(!stk.empty() && str[i]==']' && stk.top()=='['){
                stk.pop();
            }
            else{
                stk.push(str[i]);
            }
        }

        if(stk.empty()){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
