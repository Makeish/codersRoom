#include <iostream>
using namespace std;
 
int main() {
	int  n ;
	cin >> n ;
        int a[n];
	int odd = 0 , even = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
	    cin >> a[i];
	    if(a[i] & 1)
	    odd++;
	    else
	    even++;
	}
	cout << min(odd,even);
	return 0;
}