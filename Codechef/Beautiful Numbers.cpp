#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

vector < int > a ;

bool isbeautiful(int n)
{
    int prev = 0;
    
    while(n != 0) {
        
        if(n & 1) {
            if(prev == 1) return false ;
            else prev = 1 ;
        }
        else {
            prev = 0 ;
        }
        
        n >>= 1 ;
    }
    
    return true ; 
}

void solve()
{
    
    for(int i = 1 ; i <= 1e5 ; ++i) {
        
        if(isbeautiful(i)) {
            a.push_back(i) ;
        }
    }
    
}

int main()
{
    FastIO
    
    solve() ;
    
    int testcases = 1;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n ; 
        
        cin >> n ;
        
        int k = upper_bound(a.begin() , a.end() , n) - a.begin() ;
        
        cout << a[k - 1] << "\n" ;
        
    }
    return 0 ; 
}