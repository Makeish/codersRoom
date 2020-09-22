#include <bits/stdc++.h>
using namespace std;

/* Hint 1 : I'll narrow down the question 
            Can you divide whole array into k parts ? */

int main() {
	
	int testcases = 1 ; 
	
	while(testcases--) {
	    
	    int n , k , sum = 0 ; 
	    
	    cin >> n >> k ;
	    
	    int a[n] ;
	    
	    for(int i = 0 ; i < n ; ++i) {
	        cin >> a[i] ;
	        sum += a[i] ;
	    }
	    
	    if(sum % k != 0) {
	        cout << "No" ; 
	    }
	    else {
	        vector <int> b ;
	        
	        int cnt = 0 , sum1 = 0 ;
	        
	        for(int i = 0 ; i < n ; i++) {
	            sum1 += a[i] ;
	            cnt++ ; 
	            
	            if(sum1 == (sum/k)) {
	                b.push_back(cnt) ; 
	                cnt = 0 ;
	                sum1 = 0 ;
	            }
	        }
	        
	        if(b.size() > 0) {
	            cout << "Yes\n" ;
	            
	            for(auto x:b){
	                cout << x << " " ;
	            }
	        }
	        else {
	            cout << "No" ; 
	        }
	    }
	}
	return 0;
}
