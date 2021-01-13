#include <iostream>
using namespace std;

int main() {
	
	int t ; 
	cin >> t ; 
	while(t--){
	    string a ; 
	    cin >> a ;
	    
	    for(int i = 0 ; i < a.size() ; ){
	        cout << a[i];
	        if(i & 1){
	            i+=2;
	        }
	        else{
	            i++;
	        }
	    }
	    cout << "\n";
	}
	
	return 0;
}