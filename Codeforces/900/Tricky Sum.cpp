#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t ;
	while(t--)
	{
	long long int n ;
	cin >> n ;
	long long sum = (n*(n+1))/2;
	long long power = 1 ;
	while(power <= n)
	{
	    sum-=power*2;
	    power*=2;
	}
	cout << sum << "\n";
}
	return 0;
}