#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t ;
	while(t--)
	{
	    int n;
	    cin >> n;
	    long sum = 0 , cnt  = 0;
	    int a[n];
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> a[i];
	        sum+=a[i];
	        if(a[i] == 0)
	        cnt++;
	    }      
	    if(sum+cnt == 0)
	    cout << cnt+1 << "\n";
	    else
	    cout << cnt << "\n";
	}
	return 0;
}