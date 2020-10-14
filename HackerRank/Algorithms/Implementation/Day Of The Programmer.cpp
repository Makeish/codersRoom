#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int year ; cin >> year ;

    if(year >= 1700 and year <= 1917) {
        (year % 4 == 0) ? cout << "12.09."<<year : cout << "13.09."<<year ;
    }
    else if(year == 1918) {
        cout << "26.09.1918" ; 
    }
    else {
        (year % 400 == 0) ? cout << "12.09." << year : (year % 4 == 0 and year % 100 != 0) ? cout << "12.09." << year : cout << "13.09."<< year  ;
    }
    return 0 ;
}