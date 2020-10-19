#include <bits/stdc++.h>

using namespace std ;

int main()
{
    string a ;
    
    cin >> a ; 

    unordered_map < int , int > mp ;

    int j = 1 ; 

    for(int i = 0 ; i < a.length() ; ++i) {
        if(a[i] == a[i+1]) {
            mp[(a[i] - 'a' + 1)*j]++ ;
            j++ ; 
        }
        else if(i > 0 and a[i] != a[i+1] and a[i] == a[i-1]) {
            mp[(a[i] - 'a' + 1)*j]++ ;
            j = 1 ; 
        }
        else {
            mp[(a[i] - 'a' + 1)]++ ;
            j = 1 ; 
        }
    }

    int n , input ; cin >> n ; 

    while(n--) {
        cin >> input ;
        if(mp[input]) cout << "Yes\n" ;
        else cout << "No\n" ; 
    }


    return 0 ;
}
