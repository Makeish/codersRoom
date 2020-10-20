#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases = 1 ; 

    while(testcases--) {
        
        int n ; cin >> n ; 

        int a[n];

        map < int , int > mp ;

        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ;
            mp[a[i]]++ ;
        }

        for(auto x:mp) while(x.second--) cout << x.first << " " ; 
    }
    return 0 ;
}