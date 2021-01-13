#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
	string a;
	cin >> a ;
	long long int p = 0, q = 0;
	for(int i = 0 ; i < a.length() ; i++)
	{
	    if(a[i] == 'L')
	    p--;
	    else if(a[i] == 'R')
	    q++;
	}
	cout <<q-p+1;
	return 0;
}