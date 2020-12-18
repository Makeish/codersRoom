#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ; 
    
    cin >> testcases ;
    
    cin.ignore();
    
    while(testcases--) {
        
        string p , q , r ; 
        
        char c , d ; 
        
        cin >> p >> c >> q >> d >> r ; 
        
        if(p.find("machula") != string::npos) {
            
            long long int m = stoi(q) ;
            long long int n = stoi(r) ;
            
            string ans1 = to_string(n - m) ;
            
            cout << ans1 << " + " << q << " = " << r << "\n" ; 
        }
        else if(q.find("machula") != string::npos) {
            long long int m = stoi(p) ;
            long long int n = stoi(r) ;
            
            string ans1 = to_string(n - m) ;
            
            cout << p << " + " << ans1 << " = " << r << "\n" ; 
        }
        else {
            long long int m = stoi(p) ;
            long long int n = stoi(q) ;
            
            string  ans1 = to_string(n + m) ;
            
            cout << p << " + " << q << " = " << ans1 << "\n" ; 
        }
    }
    return 0 ;
}