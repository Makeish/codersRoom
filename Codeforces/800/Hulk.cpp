#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    if(i%2!=0 and i!=n)
	    {
	        cout<<"I hate that ";
	    }
	    else if(i%2!=0 and i==n)
	    {
	        cout<<"I hate it ";
	    }
	    else if(i%2==0 and i!=n)
	    {
	        cout<<"I love that ";
	    }
	    else if(i%2==0 and i==n)
	    {
	        cout<<"I love it ";
	    }
	}
	return 0;
}