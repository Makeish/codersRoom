#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test ; 

    cin >> test ; 

    while(test--) {

        int n , k ; 

        cin >> k >> n ;

        map < int , int > mp ; 

        int a[n+1] , i , j , ans = 0 ;

        for(int i = 1 ; i <= n ; ++i) cin >> a[i] ;

        for(i = 1 ; i <= n ; ++i) {
            if(mp[k - a[i]]) {
                ans = k - a[i] ;
                break ;
            }
            mp[a[i]]++ ;
        }

        for(j = 1 ; j < i ; ++j) {
            if(a[j] == ans) 
                break ;
        }

        cout << j << " " << i << "\n" ; 

    }
    return 0 ; 
}