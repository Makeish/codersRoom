#include <bits/stdc++.h>

using namespace std ;

bool mycompare(int a , int b)
{
    int ab = stoi(to_string(a) + to_string(b)) ;
    int ba = stoi(to_string(b) + to_string(a)) ;
    
    return ab > ba ;
}


string solve(int a[] , int n)
{
    string ans = "" ;
    
    sort(a , a + n , mycompare) ;
    
    for(int i = 0 ; i < n ; ++i) {
        ans += to_string(a[i]) ;
    }
    
    return ans ;
    
}

int main()
{
    int testcases = 1 ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n  ; 
        
        cin >> n ; 
        
        int a[n] ;
        
        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ;
        }
        
        cout << solve(a , n) << "\n" ;

    }
    return 0 ;
}