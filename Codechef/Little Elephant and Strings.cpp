#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int k , n ;
    
    cin >> k >> n ;
    
    string a[k] ;
    
    for(int i = 0 ; i < k ; ++i) cin >> a[i] ;
    
    string p[n] ;
    
    for(int i = 0 ; i < n ; ++i) {
        
        cin >> p[i] ;
        
        if(p[i].length() >= 47) cout <<"Good\n" ;
        else {
            
            int flag = 0 ;
            
            for(int m = 0 ; m < k ; m++) {
                if(p[i].find(a[m]) != string::npos) {
                    flag = 1 ;
                    break ;
                }
            }
            
            if(flag) cout << "Good\n" ;
            else cout << "Bad\n" ; 
        }
    }
}

int main()
{
    FastIO
    
    int testcases = 1;
    
    // cin >> testcases ;
    
    while(testcases--) {
        solve() ;
    }
    return 0 ; 
}