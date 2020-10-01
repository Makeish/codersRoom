#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ; 

    cin >> n ; 

    int a[n] , maxi = 0 ;

    map < int , int > mp ;

    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i] ;
        mp[a[i]]++ ; 
    }

    for(auto x:mp) {
        maxi = max(maxi , x.second) ;
    }

    cout << maxi ;

    return 0 ;
}