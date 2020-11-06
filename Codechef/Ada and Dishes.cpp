#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n ; 
    
    cin >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    sort(a , a + n) ; 
    
    if(n == 1) {
        cout << a[0] ;
    }
    else if(n == 2) {
        cout << a[1] ;
    }
    else if(n == 3) {
        cout << max(a[0] + a[1] , a[2]) ;
    }
    else{
        int max1 = max(a[0] + a[1] , a[2] + a[3]) ;
        
        int max2 = max(a[0] + a[2] , a[1] + a[3]) ;
        
        int max3 = max(a[0] + a[3] , a[2] + a[1]) ;
        
        int max4 = max(a[0] + a[1] + a[2] , a[3]) ; 
        
        cout << min(min(max1 , max2) , min(max3 , max4)) ;
        
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