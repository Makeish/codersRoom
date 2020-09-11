#include <bits/stdc++.h>
using namespace std;

/* Hint 1 : search for the pattern */
/* Hint 2 : see every person occurs for 2^i times where i starts from 0*/


int main() {
	
	int n ; 
	
	cin >> n ; 
	
	int j = 0 , k = 1 ;
	
	for(int i = 1 ; ; ) {
	    
	    if(i >= n) {
	        break ;
	    }
	    
	    i = i + pow(2 , j) ;
	    
	    k = (k + 1) % 5 ;
	    
	    if(k == 0) {
	        j++;
	    }
	}
	
	if(k == 1) {
	    cout << "Sheldon";
	}
	else if(k == 2) {
	    cout << "Leonard";
	}
	else if(k == 3) {
	    cout << "Penny";
	}
	else if(k == 4) {
	    cout << "Rajesh";
	}
	else{
	    cout << "Howard";
	}
	
	return 0;
}
