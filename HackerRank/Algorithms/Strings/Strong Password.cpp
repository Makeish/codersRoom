#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n ; cin >> n ;

    string a ; 

    cin >> a ;

    int cntDigit = 0 , cntUpper = 0 , cntLower = 0 , cntSpecial = 0 ;

    for(int i = 0 ; i < a.length() ; ++i) {
        if(isdigit(a[i])) {
            cntDigit = 1 ;
        }
        else if(isupper(a[i])) {
            cntUpper = 1 ;
        }
        else if(islower(a[i])) {
            cntLower = 1 ;
        }
        else if(a[i] == '@' or a[i] == '!' or a[i] == '#' or a[i] == '$' or a[i] == '%'               or a[i] == '^' or a[i] == '&' or a[i] == '*' or a[i] == '(' or a[i] == ')'               or a[i] == '-' or a[i] == '+') {
            cntSpecial = 1 ;
        }
    }

    int ans = 0 ;

    if(!cntDigit) {
        ans += 1 ;
    }
    if(!cntUpper) {
        ans += 1 ;
    }
    if(!cntLower) {
        ans += 1 ;
    }
    if(!cntSpecial) {
        ans += 1 ;
    }

    int p = 6 - a.length() ;

    (a.length() >= 6) ? cout << ans : cout << p + max(0 , ans - p) ; 
    return 0 ;
}