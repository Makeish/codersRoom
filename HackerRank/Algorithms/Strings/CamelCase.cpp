#include <bits/stdc++.h>

using namespace std ;

int main()
{
    string a ; 

    cin >> a ;

    int cnt = 0 ;

    for(int i = 0 ; i < a.length() ; ++i) {
        if(isupper(a[i])) {
            ++cnt ;
        }
    }

    cout << cnt + 1 ;

    return 0 ;
}