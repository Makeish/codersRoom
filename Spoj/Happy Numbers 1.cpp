#include <bits/stdc++.h>

using namespace std ;

int sumOfSquares(int n)
{
    int ans = 0 ;
    
    while(n != 0) {
        ans += (n % 10)*(n % 10) ;
        n /= 10 ;
    }
    
    return ans ;
}

int main()
{
	long long int n , cnt = 0 ; 
	
	cin >> n ; 
	
	set < int > s ; 
	
	if(n == 1) {
	    cout << "0" ;
	    return 0 ;
	}
	
	while(true)
	{
	    n = sumOfSquares(n) ;
	    
	    cnt++ ;
	    
	    if(n == 1) {
	        cout << cnt ;
	        return 0 ;
	    }
	    else if(s.find(n) != s.end()) {
	        cout << "-1" ;
	        return 0 ;
	    }
	    else{
	        s.insert(n) ; 
	    }
	}
}