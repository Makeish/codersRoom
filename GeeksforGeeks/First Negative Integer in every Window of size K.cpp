#include <bits/stdc++.h>

using namespace std ;

void firstNegative(int a[] , int n , int k)
{
    queue < int > queuei , q ; 
    
    for(int i = 0 ; i < k ; ++i) {
        q.push(a[i]) ; 
        if(a[i] < 0) {
            queuei.push(a[i]) ;
        }
    }
    
    if(!queuei.empty()) {
        cout << queuei.front() << " ";
    }
    else {
        cout << "0 " ;
    }
    
    for(int i = k ; i < n ; ++i) {
        
        if(!q.empty()) {
            if(!queuei.empty() and q.front() == queuei.front())
            queuei.pop() ;
            q.pop() ;
        }
        
        q.push(a[i]) ; 
        if(a[i] < 0)
        queuei.push(a[i]) ; 
        
        if(!queuei.empty()) cout << queuei.front() << " " ;
        else cout << "0 " ;
        
    }
    
    cout << "\n" ; 
}

int main()
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n , k ; cin >> n ; 
        
        int a[n] ;
        
        for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
        
        cin >> k ;
        
        firstNegative(a , n , k) ;
    }
    return 0 ;
}