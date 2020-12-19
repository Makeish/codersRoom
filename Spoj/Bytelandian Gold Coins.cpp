#include <bits/stdc++.h>

using namespace std ;

map < int , long long int > mp ;

long long int coinscount(int n)
{
    if(n < 12) return n ; 
    
    if(mp.count(n)) return mp[n] ;
    
    mp[n] = coinscount(n/2) + coinscount(n/3) + coinscount(n/4) ;
    
    return mp[n] ; 
}

int main()
{
    int n ; 
    
    while(cin >> n) {
        cout << 1ll * coinscount(n) << "\n" ;
    }
    return 0 ;
}