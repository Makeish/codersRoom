#include <iostream>
using namespace std;

int main() {
	
	int n , m ,flag = 0 ;
	cin >> n >> m ;
	char a[n+1][m+1];
	for(int i = 1 ; i <= n ; i++)
	{
	    for(int j = 1 ; j <= m ; j++)
	    {
	        cin >> a[i][j];
	        if(a[i][j] != 'W' and a[i][j] != 'G' and a[i][j] != 'B')
	        flag = 1;
	    }
	}
	if(flag == 1)
	cout << "#Color";
	else
	cout << "#Black&White";
	return 0;
}