#include <iostream>
using namespace std;

int main() {
	int n,cnt1=0,cnt2=0;
	cin>>n;
	string a;
	cin>>a;
	for(int i=0;a[i]!='\0';i++)
	{
	    if(a[i]=='A')
	    cnt1++;
	    else if(a[i]=='D')
	    cnt2++;
	}
	if(cnt1>cnt2)
	cout<<"Anton";
	else if(cnt1<cnt2)
	cout<<"Danik";
	else if(cnt1==cnt2)
	cout<<"Friendship";
	
	return 0;
}