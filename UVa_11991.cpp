#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

vector<int>vec[1000000];


int main()
{
    int n,m,k,v;

    while(scanf("%d%d", &n, &m) != EOF){
        for(int i=0;i<1000000;i++)
            vec[i].clear();

        int count=1, temp;
        while(n--){
            scanf("%d", &temp);
            vec[temp].push_back(count++);
        }
        while(m--){
            scanf("%d%d", &k,&v);
            if(vec[v].size() < k)
                printf("0\n");
            else
                printf("%d\n", vec[v][k-1]);
        }
    }
    return 0;
}
