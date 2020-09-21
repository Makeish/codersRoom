#include <bits/stdc++.h>

using namespace std ;

/* Hint 1 : Check conditions for Pig rather than Wolves , task becomes easier */
/* Hint 2 : Be careful for out of bound issues */

int main()
{
    int n , m ; 

    cin >> n >> m ; 

    char a[n+1][m+1] ;

    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= m ; ++j) {
            cin >> a[i][j] ;
        }
    }

    int count = 0 ;

    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= m  ; ++j) {
            if(a[i][j] == 'P') {
                if((j < m) and (a[i][j+1] == 'W')) {
                    ++count ;
                    a[i][j+1] = '.' ;
                }
                else if((j > 1) and (a[i][j-1] == 'W')) {
                    ++count ;
                    a[i][j-1] = '.' ;
                }
                else if((i > 1) and (a[i-1][j] == 'W')) {
                    ++count ;
                    a[i-1][j] = '.' ;
                }
                else if((i < n) and (a[i+1][j] == 'W')) {
                    ++count ;
                    a[i+1][j] = '.' ;
                }
            }
        }
    }

    cout << count << endl ; 

    return 0 ;
}