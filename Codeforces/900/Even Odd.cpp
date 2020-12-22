#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int n , maximum = 0;
	cin >> n ;
	int a[n];
	for(int i = 0 ; i < n ; i++)
	cin >> a[i];
	for(int i = 0 ; i < n ; i++)
	{
	    int cnt = 0 ;
	    for(int j = i+1 ; j < n ; j++)
	    {
	        if(a[j] >= a[j-1])
	        cnt++;
	        else
	        {
	    //        cout << a[j] << " ";
	            break;
	        }
	  //      break;  
	    }
	    maximum = max(maximum,cnt);
	}
	cout << maximum+1 ;
	
	return 0;
}