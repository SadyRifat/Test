#include<iostream>
using namespace std;

int main()
{
    int road, number, i=1,way;

    while(1){
        cin >> road >> number;
        if(road==0 && number==0) break;

        road -= 1;
        way = road / number;
        if(way > 26) cout << "Case " << i << ": impossible" << endl;
        else cout << "Case " << i << ": " << way << endl;
        i++;
    }
    return 0;
}
