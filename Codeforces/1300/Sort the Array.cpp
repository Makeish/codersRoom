#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n , start = 1 , end = 1 , flag = 0 , ans1 = 1 , ans2 = 1 ; 
	
	cin >> n ;
	
	int a[n + 1] ;
	
	for(int i = 1 ; i <= n ; ++i) cin >> a[i] ;
	
	for(int i = 1 ; i < n ; ++i) {
	    
	    if(i + 1 <= n and a[i] > a[i + 1]) {
	        
	        start = i ;
	        
	        i++ ;
	        
	        while(i + 1 <= n and a[i] >= a[i + 1]) 
	            i++ ; 
	            
	       end = i ;
	       
	       ans1 = start , ans2 = end ;
	       
	       while(start <= end) {
	           swap(a[start++] , a[end--]) ; 
	       }
	       break ;
	    }
	}
	
	for(int i = 1 ; i < n ; ++i) {
	    if(a[i] > a[i + 1]) {
	        flag = 1 ;
	        break ;
	    }
	}
	
	if(flag == 1) cout << "no\n" ;
	else {
	    cout << "yes\n" ;
	    cout << ans1 << " " << ans2 << "\n" ; 
	}
	return 0;
}
