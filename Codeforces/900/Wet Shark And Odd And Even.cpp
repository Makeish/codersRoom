#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int n ;
	cin >> n ;
	int a[n];
	vector<int>x;
	long long sum = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
	    cin >> a[i];
	    if(a[i]%2 == 0)
	    sum+=a[i];
	    else
	    x.push_back(a[i]);
	}
	sort(x.begin(),x.end());
	if(x.size() == 1)
	cout << sum;
	else if(x.size()%2 == 0)
	{
	    for(auto input:x)
	    sum+=input;
	    cout << sum;
	}
	else
	{
	    for(auto it = x.rbegin() ; it !=x.rend() ; ++it)
	    sum+=*it;
	    cout << sum-x.front();
	}
	return 0;
}