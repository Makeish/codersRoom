#include <iostream>
using namespace std;

int main() {
	
	int t ; 
	cin >> t ;
	while(t--){
	int n ;
	cin >> n ; 
	if(n % 4 != 0){
	    cout << "NO";
	}
	else{
	    cout << "YES";
	}
	cout << "\n";
	}
	return 0;
}