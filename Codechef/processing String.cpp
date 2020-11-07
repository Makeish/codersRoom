#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    string a ; 
    
    cin >> a ;
    
    int sum = 0 ; 
    
    for(int i = 0 ; i < a.length() ; ++i) {
        
        switch(a[i]) {
            case '1' : sum += 1 ;
                       break ;
            case '2' : sum += 2 ;
                       break ;
            case '3' : sum += 3 ;
                       break ;
            case '4' : sum += 4 ;
                       break ;
            case '5' : sum += 5 ;
                       break ;
            case '6' : sum += 6 ;
                       break ;
            case '7' : sum += 7 ;
                       break ;
            case '8' : sum += 8 ;
                       break ;
            case '9' : sum += 9 ;
                       break ;
        }
    }
    
    cout << sum << "\n" ; 
}

int main()
{
    FastIO
    
    int testcases = 1;
    
    cin >> testcases ;
    
    while(testcases--) {
        solve() ;
    }
    return 0 ; 
}