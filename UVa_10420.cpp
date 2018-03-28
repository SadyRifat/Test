#include<iostream>
#include<set>
#include<map>
using namespace std;

int main()
{
    int count;
    string country, trash;
    map<string, int> m;
    set<string>s;
    set<string>::iterator iter;
    cin >> count;
    cin.ignore();

    while(count--){
        cin >> country;
        getline(cin, trash);

        m[country]++;
        s.insert(country);
    }
    for(iter=s.begin(); iter!=s.end(); iter++){
        cout << *iter << " " << m[*iter] << endl;
    }
    return 0;
}
