#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ; 

    cin >> testcases ; 

    while(testcases--) 
    {
        int n , k; 

        cin >> n >> k ; 

        int a[n] , b[n] , flag1 = 0 , flag2 = 0 ;

        for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

        for(int i = 0 ; i < n ; ++i) {
            cin >> b[i] ;
        }

        sort(a , a + n) ;

        sort(b , b + n , greater <int>()) ;

        for(int i = 0 ; i < n ; ++i) {
            if(a[i] + b[i] < k) {
                flag1 = 1 ;
                break ;
            }
        }

        if(flag1 == 0) cout << "YES\n" ;
        else cout << "NO\n" ; 
    }
    return 0 ;
}