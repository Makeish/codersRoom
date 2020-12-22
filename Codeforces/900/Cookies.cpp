#include <iostream>
using namespace std;
 
int main() {
	int n ;
	cin >> n ;
	int a[n];
	int sum = 0 , cnt = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
	    cin >> a[i];
	    sum+=a[i];
	}
	for(int i = 0 ; i < n ; i++)
	{
	    if(!((sum-a[i])&1))
	    cnt++;
	}
	cout << cnt ;
	return 0;
}