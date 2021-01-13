#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a+b==c+d)
	cout<<"YES\n";
	else if(a+c==b+d)
	cout<<"YES\n";
	else if(a+d==b+c)
	cout<<"YES\n";
	else if(a==b+c+d)
	cout<<"YES\n";
	else if(b==a+c+d)
	cout<<"YES\n";
	else if(c==b+a+d)
	cout<<"YES\n";
	else if(d==b+c+a)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	return 0;
}