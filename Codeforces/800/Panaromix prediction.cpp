#include <bits/stdc++.h>
using namespace std;

int main() {
	int n , m;
	cin >> n >> m ;
	for(int i = n+1 ; ; i++)
	{
	    int flag = 0;
	    for(int j = 2 ; j*j <= i ; j++)
	    {
	        if(i % j == 0)
	        {
	            flag = 1;
	            break;
	        }
	    }
	     if(flag == 0 and i == m)
	        {
	            cout << "YES" ;
	            break;
	        }
	        else if(flag == 0 and i != m)
	        {
	           cout << "NO" ;
	            break; 
	        }
	}
	return 0;
}