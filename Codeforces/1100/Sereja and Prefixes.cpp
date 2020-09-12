#include <bits/stdc++.h>

using namespace std;

/* Hint 1 : Can we do something starting from end of the array */
/* Hint 2 : maintain count for every insertion in a new data structure for given array */
/* Hint 3 : As we need i to end we should reverse the array */

int main() {
	
	int n , m ; 
	
	cin >> n >> m ;
	
	int a[n] , cnt = 0 ;
	
	vector <int> v ;
	
	set <int> s ;
	
	for(int i = 0 ; i < n ; i++) {
	    cin >> a[i] ;
	}
    
    for(int i = n-1 ; i >= 0  ; i--){
        
        if(s.find(a[i]) == s.end()){
            cnt++;
            s.insert(a[i]);
        }
        v.push_back(cnt) ;
    }
    
    reverse(v.begin() , v.end()) ;
    
    while(m--) {
        int p;
        cin >> p ;
        cout << v[p-1] << "\n" ;
    }
	
	return 0;
}
