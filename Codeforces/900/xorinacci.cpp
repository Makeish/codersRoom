#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n ;
	cin >> n ;
	while(n--)
	{
	    int p , q , r;
	    cin >> p >> q >> r;
	    int m = p^q ;
	    if(r % 3 == 0)
	    cout << p ;
	    else if( r % 3 == 1)
	    cout << q ;
	    else
	    cout << m ;
	    cout << "\n";
	}
	return 0;
}