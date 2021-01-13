#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t ;
	while(t--)
	{
	    int n , cnt1 = 0 , cnt2 = 0;
	    cin >> n ;
	    int a[n];
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> a[i];
	        if(a[i] & 1)
	        cnt1++;
	        else
	        cnt2++;
	    }
	    if(cnt1== 0)
	    cout <<"NO\n";
	    else if(cnt2 == 0 and n%2 == 0)
	    cout <<"NO\n";
	    else 
	    cout <<"YES\n";
    }
	return 0;
}