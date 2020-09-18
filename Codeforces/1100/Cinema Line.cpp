#include <iostream>
using namespace std;

/* Hint 1 : Always try to first reduce fifty notes*/

int main() {
	
	int n , cnt1 = 0 , cnt2 = 0 , flag = 0 ;
	
	cin >> n ;
	
	int a[n] ;
	
	for(int i = 0 ; i < n ; ++i) {
	    
	    cin >> a[i] ;
	    
	    if(a[i] == 25) {
	        cnt1++;
	    }
	    else if(a[i] == 50) {
	        if(cnt1 >= 1) {
	            cnt1-- ;
	            cnt2++;
	        }
	        else{
	            flag = 1;
	        }
	    }
	    else if(a[i] == 100) {
	        if(cnt2 >= 1 and cnt1 >= 1){
	            cnt2--;
	            cnt1--;
	        }
	        else if(cnt1 >= 3) {
	            cnt1 -= 3 ;
	        }
	        else{
	            flag = 1 ; 
	        }
	    }
	}
	
	if(flag == 1) {
	    cout << "NO" ;
	}
	else {
	    cout << "YES" ; 
	}
	
	return 0;
}
