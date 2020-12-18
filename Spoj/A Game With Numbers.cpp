#include <bits/stdc++.h>

using namespace std ;

int main()
{
	long long int n ; 
	
	cin >> n ; 
	
	if(n % 10 != 0) {
	    cout << "1\n" << n % 10 ;
	}
	else
	cout << "2" ;
	
	return 0 ;
}