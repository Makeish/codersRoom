#include <bits/stdc++.h>

using namespace std ;

vector < int > calculate(vector < int > a , vector < int > b )
{
    vector < int > ans(2) ;

    for(int i = 0 ; i < a.size() ; ++i) {
        if(a[i] > b[i]) {
            ans[0]++ ;
        }
        else if(a[i] < b[i]) {
            ans[1]++ ;
        }
    }

    return ans ;
}


int main()
{
    int n = 3 , x; 

    vector < int > a , b  ;

    for(int i = 0 ; i < n ; ++i) {
        cin >> x ;
        a.push_back(x);
    }

    for(int i = 0 ; i < n ; ++i) {
        cin >> x ;
        b.push_back(x);
    }

    vector < int > ans = calculate( a , b ) ; 

    for(auto it:ans) {
        cout << it << " " ; 
    }
    return 0 ;
}