#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	if(binary_search(a,a+n,1)==0)
	cout<<"EASY";
	else
	cout<<"HARD";
	return 0;
}