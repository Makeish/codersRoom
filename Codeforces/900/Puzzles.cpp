#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int n , m;
	cin >> n >> m;
	int a[m],ans = INT_MAX;
	for(int i = 0 ; i < m ; i++)
	cin >> a[i];
	sort(a,a+m);
    for(int i = 0 ; i < m ; i++)
    {
        if(n+i-1 < m)
        ans = min(ans,a[n+i-1]-a[i]);
    }
	cout << ans;
	return 0;
}