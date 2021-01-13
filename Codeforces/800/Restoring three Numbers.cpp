#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int a[4];
    for(int i=0;i<4;i++)
    cin>>a[i];
    sort(a,a+4);
    cout<<a[3]-a[0]<<" "<<a[3]-a[1]<<" "<<a[3]-a[2];
	return 0;
}