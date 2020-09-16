    #include <bits/stdc++.h>
     
    using namespace std ;
     
     
    int main() 
    {
        int testcases = 1 ;
        
        // cin >> testcases ;
        
        while(testcases--) {
            
            int a , b , c ;
            
            cin >> a >> b >> c ; 
            
            if(c == 0 and a == b) {
                cout << "YES\n" ;
            }
            else if(c != 0  and ((b - a) % c == 0) and ((b - a)/c + 1 > 0)) {
                cout << "YES\n" ;
            }
            else{
                cout << "NO\n" ; 
            }
            
        }
        return 0 ;
    }