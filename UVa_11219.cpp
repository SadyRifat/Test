#include<iostream>
#include<sstream>
using namespace std;

int find_date(char *str, int tag){
    int value;
    if(tag == 1){
        string temp;
        for(int i=0; i<2; i++){
            temp += str[i];
        }
        stringstream(temp) >> value;
    }
    else if(tag == 2){
        string temp;
        for(int i=3; i<5; i++){
            temp += str[i];
        }
        stringstream(temp) >> value;
    }
    else if(tag == 3){
        string temp;
        for(int i=6; i<10; i++){
            temp += str[i];
        }
        stringstream(temp) >> value;
    }

    return value;
}

int main()
{
    int n,cdate,cmonth,cyear,bdate, bmonth, byear,age;
    char cstr[15], bstr[15];
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> cstr >> bstr;
        cdate = find_date(cstr,1);
        bdate = find_date(bstr,1);
        cmonth = find_date(cstr,2);
        bmonth = find_date(bstr,2);
        cyear = find_date(cstr,3);
        byear = find_date(bstr,3);

        if(cdate < bdate){
            cdate += 30;
            bmonth += 1;
        }
        if(cmonth < bmonth){
            cmonth += 12;
            byear += 1;
        }

        age = cyear - byear;
        if(age < 0) cout << "Case #" << i << ": " << "Invalid birth date" << endl;
        else if(age > 130) cout << "Case #" << i << ": " << "Check birth date" << endl;
        else cout << "Case #" << i << ": " << age << endl;

    }
    return 0;
}
