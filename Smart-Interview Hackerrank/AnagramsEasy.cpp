#include <bits/stdc++.h>

using namespace std ;

int main()
{
    ios_base :: sync_with_stdio(false) ;
    
    cin.tie(NULL) ;
    
    cout.tie(NULL) ; 
    
    int testcases ;
    
    cin >> testcases ; 
    
    cin >> ws ; 
    
    while(testcases--) {
        
        string a , b ; 
        
        cin >> a >> b ; 
        
        sort(a.begin() , a.end()) ;
        
        sort(b.begin() , b.end()) ;
        
        (a.compare(b) == 0) ? cout << "True\n" : cout << "False\n" ; 
         
    }
    return 0 ;
}