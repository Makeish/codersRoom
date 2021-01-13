#include <iostream>
using namespace std;

int main() {
	int  n ;
	cin >> n ;
	for(int i = n ; ; i++)
	{
	    int p = i , k = i , sum = 0;
	    while(p != 0)
	    {
	        sum=sum+(p%10);
	        p/=10;
	    }
	    if(sum % 4 == 0)
	    {
	        cout << k ;
	        break;
	    }
	}
	
	return 0;
}