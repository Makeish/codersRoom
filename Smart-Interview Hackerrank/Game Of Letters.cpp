#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        string a ; cin >> a ;
        
        map < char , int > mp ;
        
        int ans = 0 ; 
        
        for(int i = 0 ; i < (int)a.length() ; ++i) {
            mp[a[i]]++ ;
        }
        
        for(auto x:mp) ans ^= x.second ;
        
        (ans == 0) ? cout << "Banta\n" : cout << "Santa\n" ;
    }
    return 0 ;
}