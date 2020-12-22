#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t ;
	while(t--)
	{
	    int n , k ;
	    cin >> n >> k ;
	        int p = n - (n%k);
	        int r = min(n%k,k/2);
	        cout << p+r << "\n";
	}
	return 0;
}