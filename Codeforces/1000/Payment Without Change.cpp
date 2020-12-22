#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
 
 
int main() {
    
    int t = 1 ;
    cin >> t ;
    while(t--)
    {
       int a , b , n , s ;
       cin >> a >> b >> n >> s ;
       if(s%n <= b and 1ll*a*n+b >= s)
       cout <<"YES\n";
       else
       cout << "NO\n";
    }
	return 0;
}