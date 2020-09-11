#include <bits/stdc++.h>
using namespace std;

/* Hint 1 : what is sum of first k odd numbers */
/* Hint 2 : if n is  odd , k is odd */
/* Hint 3 : if n is even , k is even */
/* Hint 4 : check for integer overflow */


int main() {
    
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases --) {
	
	long long int n , k ; 
	
	cin >> n >> k ;
	
	if(((1ll)*k*k > n) or (k % 2 != n % 2)) {
	    cout << "NO\n" ;
	}
	else{
	    cout << "YES\n";
	}
	
    }
	
	return 0;
}
