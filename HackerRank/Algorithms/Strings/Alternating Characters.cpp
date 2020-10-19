#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int testcases ; cin >> testcases ;

    while(testcases--) {
        
        string a ; cin >> a ;
        
        int cnt = 0 , ans = 0 ;

        for(int i = 0 ; i < a.length() ; ++i) {
            
            cnt = 0 ;
            while((i < a.length() - 1) and a[i] == a[i+1]) {
                ++i ;
                cnt++ ;
            }
            ans += cnt ;
        }

        cout << ans << "\n" ; 
    }
    return 0 ;
}