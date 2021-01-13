#include <iostream>
using namespace std;

int main() {
	
	int t ; 
	cin >> t ; 
	while(t--){
	    int n , count1 = 0 , count2 = 0 ; 
	    cin >> n ; 
	    
	    int a[n];
	    
	    for(int i = 0 ; i < n ; ++i){
	        cin >> a[i];
	        if((i & 1) and (a[i] % 2 == 0)){
	            count1++;
	        }
	        else if((i % 2 == 0) and (a[i] & 1)){
	            count2++;
	        }
	    }
	    
	    if(count1 == count2){
	        cout << count1 << "\n";
	    }
	    else{
	        cout << "-1\n";
	    }
	}
	
	return 0;
}