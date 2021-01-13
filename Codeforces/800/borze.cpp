#include <iostream>
using namespace std;

int main() {
	string a ;
	cin >> a ;
	for(int  i = 0 ; i < a.length() ; )
	{
	    if(a[i] == '-' and a[i+1] == '.')
	    {
	        cout << "1";
	        i+=2;
	    }
	    else if(a[i] == '-' and a[i+1] == '-')
	    {
	        cout << "2";
	        i+=2;
	    }
	    else if(a[i] == '.')
	    {
	        cout <<"0";
	        i++;
	    }
	}
	return 0;
}