#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n,cnt=0;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        if(a=="Tetrahedron")
        cnt=cnt+4;
        else if(a=="Cube")
        cnt=cnt+6;
        else if(a=="Octahedron")
        cnt=cnt+8;
        else if(a=="Dodecahedron")
        cnt=cnt+12;
        else
        cnt=cnt+20;
    }
    cout<<cnt;
	return 0;
}