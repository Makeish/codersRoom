#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int testcases ; 
	
	cin >> testcases ; 
	
	while(testcases--) {
		
		int n ; 
		
		cin >> n ; 
		
		int ans = 0 ;
		
		int a[n] , b[n] ;
		
		for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
		
		for(int i = 0 ; i < n ; ++i) cin >> b[i] ;
		
		sort(a , a + n) ;
		
		sort(b , b + n) ; 
		
		for(int i = 0 ; i < n ; ++i) {
			ans +=  a[i] * b[i] ; 
		}
		
		cout << ans << "\n" ; 
	}
	return 0 ;
}