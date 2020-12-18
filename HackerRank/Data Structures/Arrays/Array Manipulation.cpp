#include <bits/stdc++.h>
#define ll long long 

using namespace std ;

int main()
{
    ll int n , q , max = 0, x = 0 ;

    cin >> n >> q ; 

    ll int *a = new ll int[n+1]() ; 

    while(q--) {
        
        ll int r , s , value ; 

        cin >> r >> s >> value ;

        a[r] += value ;

        if((s + 1) <= n) a[s+1] -= value ;
    }

    for(int i = 1 ; i <= n ; ++i) {

        x += a[i] ; 

        if(x > max) max = x ;
    }

    cout << max << "\n" ; 

    return 0 ;
}
