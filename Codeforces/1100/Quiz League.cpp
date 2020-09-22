#include <bits/stdc++.h>
using namespace std;

/* Hint: The problem requires input/output files */

int main() {
    
    ifstream inf("input.txt") ;
    ofstream ouf("output.txt") ;
	
	int testcases = 1 ; 
	
	while(testcases--) {
	    
	    int n , k , i ; 
	    
	    inf >> n >> k ;
	    
	    int a[n];
	    
	    for(i = 0 ; i < n ; ++i) {
	        inf >> a[i] ;
	    }
	    
	    for(i = k-1 ; i < n ; i = (i+1)%n) {
	        if(a[i] == 1) {
	            break ;
	        }
	    }
	    
	    ouf << i+1 ;
	    
	}
	return 0;
}
