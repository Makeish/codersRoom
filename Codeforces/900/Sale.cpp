#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int n , m ;
	long long sum = 0 ;
	cin >> n >> m ;
	int a[n];
	for(int i = 1 ; i <= n ; i++)
	cin >> a[i];
	sort(a+1,a+n+1);
	for(int i = 1 ; i <= m ; i++)
	{
	    if(a[i] <= 0)
	    sum+=abs(a[i]);
	}
	cout << sum;
	return 0;
}