#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t ;
    int a[t],b[t] , ans = 0 , maxi = 0;
    for(int i = 0 ; i < t ; i++)
    cin >> a[i] >> b[i];
    for(int i = 0 ; i < t ; i++)
    {
        ans = ans - a[i] + b[i];
        maxi = max(maxi , ans);
    }
    cout << maxi ;
	return 0;
}