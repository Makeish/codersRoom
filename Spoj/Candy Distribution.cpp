#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n ; 
	
	while(true) {
	    
	    cin >> n ;
	    
	    if(n == 0) break ;
	    
	    long long int ans = 0 ;
	    
	    long long int a[n] , b[n] ;
	    
	    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
	    
	    sort(a , a + n , greater < int >()) ;
	    
	    for(int i = 0 ; i < n ; ++i) cin >> b[i] ;
	    
	    sort(b , b + n ) ;
	    
	    for(int i = 0 ; i < n ; ++i) ans += 1ll * (a[i]*b[i]) ;
	    
	    cout << ans << "\n" ; 
	}
	return 0;
}
