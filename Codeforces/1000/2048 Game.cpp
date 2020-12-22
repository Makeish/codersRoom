#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int q ;
    cin >> q ;
    while(q--)
    {
        int n , flag = 0;
        cin >> n ;
        int a[n];
        long long s=0;
        for(int i = 0 ; i < n ; i++) cin>>a[i];
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] <= 2048)
            s+=a[i];
        }
        if(s >= 2048)
        cout << "YES\n";
        else
        cout << "NO\n";
    }
	return 0;
}