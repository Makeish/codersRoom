#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ;

    cin >> testcases ;

    while(testcases--) {

        int n ; 

        cin >> n ; 

        int a[n] , pre[n] ;

        cin >> a[0] ;

        pre[0] = a[0] ; 

        for(int i = 1 ; i < n ; ++i) {
            
            cin >> a[i] ;
            pre[i] = pre[i - 1] + a[i] ; 

        }

        int flag = 0 ;

        for(int i = 0 ; i <= n - 1 ; ++i) {

            if(i == 0) {
                if(pre[n - 1] - pre[0] == 0) {
                    flag = 1 ;
                    break ; 
                }
            }
            if(pre[i - 1] == (pre[n - 1] - pre[i])) {
                
                flag = 1 ;
                break ; 

            }
        }

        (flag == 1) ? cout << "YES\n" : cout << "NO\n" ; 

    }
    return 0 ;
}