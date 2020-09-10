#include <iostream>
using namespace std;

/* A regular polygon has all its sides equal and all its angles equal */

int main() {
	
	int testcases ;
	
	cin >> testcases ;
	
	while(testcases --){
	    
	    int interiorAngle ;
	    
	    cin >> interiorAngle ;
	    
	    /* interiorAngle = (n-2)*(180)/n */
	    // if n is integer answer exits else not
	    
	    if(360 % (180 - interiorAngle) == 0){
	        cout << "YES\n";
	    }
	    else{
	        cout << "NO\n";
	    }
	}
	return 0;
}
