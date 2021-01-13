#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long int a[500001] ;
	
	a[0] = 0 ;
	
    map < long long int , long long int > mp ;
    
    mp[0]++ ; 
	
	for(int i = 1 ; i <= 500000 ; ++i) {
	    
	    if((a[i - 1] - i > 0) and (mp[a[i - 1] - i] == 0)) {
	        a[i] = a[i - 1] - i ;
	    }
	    else{
	        a[i] = a[i - 1] + i ; 
	    } 
	    
	    mp[a[i]]++ ; 
	}
	
	while(true) {
	    
	    int n ;
	    
	    cin >> n ; 
	    
	    if(n == -1) break ;
	    
	    cout << a[n] << "\n" ;
	}
	
	return 0;
}
