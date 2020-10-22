#include <bits/stdc++.h>

using namespace std ;

char solve(string a)
{
    unordered_map < char , int > mp ;
    
    for(int i = 0 ; i < (int) a.length() ; ++i) {
        mp[a[i]]++ ;
    }
    
    for(int i = 0 ; i < (int) a.length() ; ++i) {
        if(mp[a[i]] >= 2) return a[i] ;
    }
    
    return '.' ; 
}
int main()
{
    int testcases ; 
    
    cin >> testcases ; 
    
    while(testcases--) {
        
        string a ; 
        
        cin >> a ; 
        
        cout << solve(a) << "\n" ;
        
    }
    return 0 ;
}