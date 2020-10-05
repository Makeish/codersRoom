#include <bits/stdc++.h>
#define ll long long 

using namespace std ;

ll int trailingZeroes(ll int n)
{
    ll int count = 0 ;
    
    for(ll int i = 5 ; (n /i) > 0 ; i = i * 5) {
        count += (n / i) ; 
    }
    
    return (1ll)*count ; 
}

int main()
{
    ios_base :: sync_with_stdio(false) ;
    
    cin.tie(NULL) ;
    
    cout.tie(NULL) ;
    
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        ll int n ;
        
        cin >> n ;
        
        cout << (1ll)*trailingZeroes(n) << "\n" ; 
        
    }
    return 0 ;
}