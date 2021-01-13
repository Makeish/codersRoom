#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	int t ; 
	cin >> t ; 
	while(t--){
	    int n ; 
	    cin >> n ; 
	    
	    int sum = pow(2,n)  ;
	    
	    for(int i = 1 ; i <= n/2 - 1 ; i++){
	        sum+=abs(pow(2 , i));
	    }
	    
	    for(int i = n/2 ; i <= n-1 ; i++){
	        sum-=abs(pow(2 , i));
	    }
	    
	    cout << sum << "\n";
	}
	return 0;
}