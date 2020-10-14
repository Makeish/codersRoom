#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n , cnt1 = 0 , cnt2 = 0 , maxi = -1 , mini = 1e8 + 1;

    cin >> n ; 

    int a[n] ;

    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

    for(int i = 0 ; i < n ; ++i) {
        if(a[i] > maxi) {
            maxi = a[i] ;
            ++cnt1 ;
        }
        if(a[i] < mini) {
            mini = a[i] ;
            ++cnt2 ;
        } 
    }

    cout << cnt1 - 1 << " " << cnt2 - 1 ;

    return 0 ;
}