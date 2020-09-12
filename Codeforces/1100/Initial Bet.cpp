#include <bits/stdc++.h>

using namespace std;

/* Hint 1 : Basically , he is telling us to find average */
/* Hint 2 : one corner case , read first line of problem statement carefully */

int main() {
	
	int k = 5 , sum = 0 ;
	
	while(k--) {
	    
	    int input ;
	    
	    cin >> input ;
	    
	    sum += input ;
	}
	
	if(sum % 5 == 0 and sum != 0) {
	    cout << sum / 5 ;
	}
	else{
	    cout << "-1" ;
	}
	
	return 0;
}
