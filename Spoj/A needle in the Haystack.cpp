#include <bits/stdc++.h>

using namespace std ;

int main()
{ 
    long long int testcases ; 
    
    while(cin >> testcases) {
        
        string a , b ; 
        
        cin >> a >> b ; 
        
        int found = b.find(a) ;
        
        while(found != string::npos) {
            
            cout << found << "\n" ;
            
            found = b.find(a , found + 1) ;
        }
        
        cout << "\n" ; 
        
    }
    
    
    return 0 ;
}