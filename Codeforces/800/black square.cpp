#include <iostream>
using namespace std;

int main() {
	int b,c,d,e,s=0;
	cin>>b>>c>>d>>e;
	string a;
	cin>>a;
	for(int i=0;a[i]!='\0';i++)
	{
	    if(a[i]=='1')
	    s+=b;
	    else if(a[i]=='2')
	    s+=c;
	    else if(a[i]=='3')
	    s+=d;
	    else if(a[i]=='4')
	    s+=e;
	}
	cout<<s;
	return 0;
}