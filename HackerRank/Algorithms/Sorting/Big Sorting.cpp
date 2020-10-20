#include <bits/stdc++.h>

using namespace std ;

bool mycompare(string a , string b)
{
    int l = a.length() ;
    int m = b.length() ;

    if(l == m) return a < b ;
    return l < m ; 
}

int main()
{
    int testcases = 1 ; 

    while(testcases--) {
        
        int n ; cin >> n ; 

        string a[n] ; 

        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ;
        }

        sort(a, a + n, mycompare) ;

        for(int i = 0 ; i < n ; ++i) {
            cout << a[i] << "\n" ;
        }


    }
    return 0 ;
}