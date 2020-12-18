#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int n ; 
	
	while(true) {
		
		cin >> n ; 
		
		if(n == 0) break ; 
		
		int a[n + 1] , flag = 0 ;
		
		for(int i = 1 ; i <= n ; ++i) cin >> a[i] ;
		
		for(int i = 1 ; i <= n ; ++i) {
		    if(a[a[i]] != i) {
		        flag = 1 ;
		        break ;
		    } 
		}
		
		if(flag == 1) cout << "not ambiguous\n" ;
		else cout << "ambiguous\n" ; 
	}
	return 0 ;
}