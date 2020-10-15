#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test ; cin >> test ; 

    while(test--) {
    
        int flag = 0 , flag1 = 0 , n ; cin >> n ;    

        string a ; cin >> a ;

        map < char , int > mp ;

        for(int i = 0 ; i < a.length() ; ++i) mp[a[i]]++ ; 

        for(auto x:mp) {
            if(x.first != '_' and x.second == 1) {
                flag = 1 ;
                break ; 
            }
        }

        for(int i = 0 ; i < n ; ++i) {
            if(i == 0) {
                if(a[i] != a[i + 1]) flag1 = 1 ; 
            }
            else if(i == n - 1) {
                if(a[i] != a[i - 1]) flag1 = 1 ; 
            }
            else {
                if(a[i] != a[i - 1] and a[i] != a[i + 1]) flag1 = 1 ;
            }
        }

        if((flag == 0 and mp['_'] >= 1) or (flag1 == 0)) cout << "YES\n" ;
        else cout << "NO\n" ; 
    }

    return 0 ;
}