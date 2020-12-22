#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >>t;
    while(t--)
    {
	int a[3];
	for(int i=0;i<3;i++)
	cin >> a[i];
	sort(a,a+3);
	int k=2*(a[2]-a[0]-2);
	if(k<0)
	cout<<"0\n";
	else
	cout<<k<<"\n";
   }
	return 0;
}