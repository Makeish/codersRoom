#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t ;
	while(t--)
	{
	    int a[3];
	    for(int i = 0 ; i < 3 ; i++)
	    cin >> a[i];
	    sort(a,a+3);
	    int n ;
	    cin >> n ;
	    n = n -(a[2]-a[0]);
	    n = n -(a[2]-a[1]);
	    if( n % 3 != 0 || n < 0)
	    cout << "NO\n";
	    else
	    cout << "YES\n";
	}
	return 0;
}