#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ; 
	cin >> t ; 
	while(t--){
	    int n , p = 1 , ans; 
	    cin >> n ; 
	    vector <int> a ;
	    while(n){
	        ans = p * (n%10);
	        if(ans != 0)
	        a.push_back(ans);
	        p = p*10;
	        n/=10;
	    }
	    cout << a.size() << "\n";
	    for(auto x:a)
	    cout << x << " ";
	    cout << "\n";
	}
	return 0;
}