#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t ;
	while(t--)
	{
	    int n , flag = 0;
	    cin >> n ;
	    string a;
	    cin >> a;
	    if(n >= 11)
	    {
	    for(int i = 0 ; i < n - 10 ; i++)
	    {
	        if(a[i] == '8')
	        {
	            flag = 1;
	            break;
	        }
	    }
	    if(flag == 1)
	    cout <<"YES\n";
	    else 
	    cout <<"NO\n";
	    }
	    else
	    cout <<"NO\n";
	}
	return 0;
}