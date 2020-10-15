#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases = 1 ; 

    while(testcases--) {
        
        int n , m , ans = 0 , max = -1; 

        cin >> n >> m ; 

        map < int , int > mp ;

        string a[n] ;

        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ;
        }

        for(int i = 0 ; i < n - 1 ; ++i) {
            
            for(int j = i + 1 ; j < n ; ++j) {

                int p = 0 ;

                for(int k = 0 ; k < m ; ++k) {
                    if(a[i][k] == '1' or a[j][k] == '1')
                    p++ ;
                }

                if(p > max) {
                    max = p ;
                    ans = 1 ;
                }
                else if(p == max) {
                    ans++ ; 
                }
            }

        }

        cout << max << "\n" << ans ;

    }

    return 0 ;
}