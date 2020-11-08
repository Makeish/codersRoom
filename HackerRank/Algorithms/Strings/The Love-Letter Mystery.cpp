#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int t ; 
    
    cin >> t ; 
    
    while(t--) {
        
        string a ; 
        
        cin >> a ;
        
        int k , cnt = 0 , j = 1 ;
        
        if(a.length() & 1) {
            k = (a.length()/2) + 1 ;
            j = 2 ; 
        }
        else k = a.length()/2 ;
        
        for(int i = k ; i < a.length() ; ++i) {
            if(a[i] != a[i - j]) {
                cnt += abs(a[i] - a[i - j]) ;
            } 
            j+=2 ; 
        }
        
        cout << cnt << "\n" ; 
    }
    return 0 ; 
}