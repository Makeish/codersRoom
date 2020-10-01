#include <bits/stdc++.h>

using namespace std ;


void solve()
{
    int n , q , p , x , y , lA = 0 ; 

    cin >> n >> q ;

    vector < vector < int > > a(n) ;

    while(q--) {
        
        cin >> p >> x >> y ;

        if(p == 1) {
            a[(x ^ lA) % n].push_back(y) ; 
        }
        else {

            int ans = (x ^ lA) % n ;

            lA = a[ans][y % a[ans].size()] ;

            cout << lA << "\n" ;  
        }

    }
}

int main()
{
    int testcases = 1 ; 
    
    // cin >> testcases ;
    
    while(testcases--) {
        
        solve() ;
    }
    return 0 ;
}