#include <bits/stdc++.h>

using namespace std ;

/* Hint 1 : if -ve integers are odd in count , push -ve into one , zero into one , +ve into one */
/* Hint 2 : if -ve integers are even in count , push (-ve - 1) into one , (zero + 1 ) into one , +ve into one */
/* Hint 3 : What if +ve count is 0 ? */

int main() 
{
    int n ; 
    
    cin >> n ; 
    
    int a[n] , cnt1 = 0 , cnt2 = 0;
    
    vector <int> p , q ;
    
    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i] ;
        
        if(a[i] < 0) {
            ++cnt1 ;
            p.push_back(a[i]) ;
            
        }
        else if(a[i] > 0) {
            ++cnt2 ; 
            q.push_back(a[i]) ;
        }
    }
    
    if(cnt1 & 1) {
        
        if(cnt2 == 0) {
            q.push_back(p[0]) ;
            q.push_back(p[1]) ;
            
            cout << p.size() - 2 << " " ;
        
            for(auto it = p.begin() + 2 ; it != p.end() ; ++it) {
                cout << *it << " " ;
            }
        }
        
        else {
            cout << p.size() << " " ;
        
            for(auto it = p.begin()  ; it != p.end() ; ++it) {
                cout << *it << " " ;
            }
        }
        
        cout << "\n" ;
        
        cout << q.size() << " " ;
        
        for(auto x:q) {
            cout << x << " " ;
        }
        
        cout << "\n" << "1 0" ;
        
    }
    else{
        
         if(cnt2 == 0) {
            q.push_back(p[1]) ;
            q.push_back(p[2]) ;
            
            cout << p.size() - 3 << " " ;
        
            for(auto it = p.begin() + 3 ; it != p.end() ; ++it) {
                cout << *it << " " ;
            }
        }
        
        else {
            cout << p.size() - 1 << " " ;
        
            for(auto it = p.begin() + 1 ; it != p.end() ; ++it) {
                cout << *it << " " ;
            }
        }
        
        cout << "\n" ;
        
        cout << q.size() << " " ;
        
        for(auto x:q) {
            cout << x << " " ;
        }
        
        cout <<  "\n" << "2 0 "<<p[0] ;
    }
    
    return 0 ;
}