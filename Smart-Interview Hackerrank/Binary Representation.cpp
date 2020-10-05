#include <bits/stdc++.h>

using namespace std ;

void solve()
{
    int n ;
    
    cin >> n ;
    
    string a = "" ;
    
    if(n == 0) {
        cout << "0" ;
    }
    else {
        while(n != 0) {
            a += to_string(n%2) ;
            n /= 2 ;
        }
    
        reverse(a.begin() , a.end()) ;
    
        cout << a ;
    }
    
    cout << "\n" ; 
}

int main()
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        solve() ;
    }
    return 0 ;
}