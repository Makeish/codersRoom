#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n,cnt=0;
    cin>>n;
    int a[5]={100,20,10,5,1};
    for(int i=0;i<5;)
    {
        if(n>=a[i])
        {
            cnt++;
            n=n-a[i];
            i=-1;
        }
        else
        i++;
    }
    cout<<cnt;
	return 0;
}