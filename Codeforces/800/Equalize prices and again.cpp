#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int q;
	cin>>q;
	while(q--)
	{
	    int n,s=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	    cin>>a[i];
	    s=s+a[i];
	    }
	    if(s%n==0)
	    cout<<s/n<<"\n";
	    else
	    cout<<s/n+1<<"\n";
	}
	return 0;
}