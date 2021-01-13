#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int a,b,cnt=0;
    cin>>a>>b;
    while(a<=b)
    {
        a=3*a;
        b=2*b;
        cnt++;
    }
    cout<<cnt;
	return 0;
}