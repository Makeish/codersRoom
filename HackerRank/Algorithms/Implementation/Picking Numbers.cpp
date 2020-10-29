#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n ; 

    cin >> n ; 

    int a[n] , cnt[101] = {};

    for(int i = 0 ; i < n ; ++i)  {
        
        cin >> a[i] ;

        cnt[a[i]]++ ;
    
    }

    int maxi = 1;

    for(int i = 1 ; i < 100 ; ++i) {
        maxi = max(maxi , cnt[i] + cnt[i - 1]) ; 
    }

    cout << maxi ;

    return 0 ;
}
