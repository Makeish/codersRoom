#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n ;
    
    cin >> n ;
    
    vector <int> p , q ;
    
    for(int i = 1 ; i <= n ; ++i) {
        if(i & 1) {
            p.push_back(i) ;
        }
        else{
            q.push_back(i) ; 
        }
    }
    
    if(n == 1 or n == 2) {
        cout << "No" ;
    }
    else{
        cout << "Yes\n" ;
        
        cout << p.size() << " " ;
        
        for(auto x:p) {
            cout << x << " " ;
        }
        
        cout << "\n" ; 
        
        cout << q.size() << " " ;
        
        for(auto y:q) {
            cout << y << " " ;
        }
    }
    
    
    return 0 ;
}