#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int testcases = 1 ; 
	cin >> testcases ;
	
	while(testcases --){
	    
	    int n , k ; 
	    cin >> n >> k ; 
	    
	    int a[n] , b[n];
	    
	    for(int i = 0 ; i < n ; ++i)
	    cin >> a[i];
	    
	    for(int i = 0 ; i < n ; i++)
	    cin >> b[i];
	    
	    sort(a , a+n );
	    sort(b , b+n , greater <int>());
	    
	    for(int i = 0 ; i < n ; ++i){
	        if(k == 0)
	        break;
	        
	        if(a[i] < b[i]){
	            swap(a[i] , b[i]);
	            k--;
	        }
	    }
	    long long sum = 0 ;
	    for(int i = 0 ; i < n ; ++i)
	    sum+=a[i];
	    
	    cout << sum << "\n";
	}
	return 0;
}