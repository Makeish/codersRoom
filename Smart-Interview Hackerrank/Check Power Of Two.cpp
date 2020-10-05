#include <bits/stdc++.h>

using namespace std ;

void solve()
{
    long long int n ;
    
    cin >> n ;
    
    if(n && !(n & (n - 1))) {
        cout << "True\n" ; 
    }
    else {
        cout << "False\n" ; 
    }
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