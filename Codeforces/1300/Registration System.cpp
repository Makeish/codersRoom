#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n ; 
    
    cin >> n ; 
    
    unordered_map < string , int > mp ;
    
    while(n--) {
        
        string a ; 
        
        cin >> a ; 
        
        int i = 1 , j = 1; 
        
        if(!mp[a]) {
            
            cout << "OK\n" ;
            mp[a]++ ;
            
        }
        else {
            
            string b = a + to_string(mp[a]) ;
            cout << b << "\n" ;
            mp[a]++ ; 
        }
    }
    
    return 0 ;
}