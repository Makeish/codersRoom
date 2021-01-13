#include <bits/stdc++.h>
using namespace std;

int main() {
	int n , cnt = 0;
	cin >> n;
	string a;
	cin >> a;
	for(int i = 0 ; i < a.length() ; i++)
	{
	    if(a[i] == 'x' and a[i+1] == 'x' and a[i+2] == 'x')
	    cnt++;
	}
	cout << cnt << "\n";
	return 0;
}