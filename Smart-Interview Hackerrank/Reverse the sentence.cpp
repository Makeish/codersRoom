#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test ; 
    
    cin >> test ;
    
    cin.ignore() ;
    
    while(test--) {
        
        stack < string > s ; 
        
        string a , b ; 
        
        getline(cin , a) ;
        
        stringstream ss(a) ;
        
        while(ss >> b) {
            s.push(b) ;
        }
        
        while(!s.empty()) {
            cout << s.top() << " " ;
            s.pop() ;
        }
        cout << "\n" ; 
    }
    return 0 ;
}