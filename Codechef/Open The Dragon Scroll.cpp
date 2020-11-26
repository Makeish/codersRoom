#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

int setBits(int p) {
    
    int m = 0 ;
    
    while(p) {
        
        if(p & 1)
        m++ ;
        
        p >>= 1 ;
    }
    
    return m ; 
}

void solve()
{
    int n , a , b , cnt1 = 0 , cnt2 = 0 ;
    
    cin >> n >> a >> b ;
    
    cnt1 = setBits(a) ;
    
    cnt2 = setBits(b) ; 
    
    if(cnt1 + cnt2 == n) {
        cout << (1 << n) - 1 ;
    }
    else if(cnt1 + cnt2 > n) {
        cout << (1 << n) -1 - (1 << (cnt1 + cnt2 - n)) + 1 ;
    }
    else {
        cout << (1 << n) -1 - (1 << (n - cnt1 - cnt2)) + 1 ;
    }
    
    cout << "\n" ; 
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