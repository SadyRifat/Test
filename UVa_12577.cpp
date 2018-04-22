#include<iostream>
using namespace std;

int main()
{
    string input;
    int i=1;
    while(1){
        cin >> input;
        if(input == "*") break;
        if(input == "Hajj") cout << "Case " << i << ": Hajj-e-Akbar" << endl;
        else cout << "Case " << i << ": Hajj-e-Asghar" << endl;
        i++;
    }
    return 0;
}
