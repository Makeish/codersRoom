        #include <bits/stdc++.h>
        #define ll long long
         
        using namespace std ;
         
        ll int solve(int n)
        {
            ll int cnt = 1 ;
            
            for(ll int i = n + 1 ; ; ++i) {
                
                int j = abs(i) ;
                
                while(j != 0) {
                    if(j % 10 == 8) {
                        return cnt ;
                    }
                    j /= 10 ;
                }
                
                cnt++;
            }
        }
         
        int main() 
        {
            int testcases = 1 ;
            
            // cin >> testcases ;
            
            while(testcases--) {
                
                ll int n  ; 
                
                cin >> n ;
                
                cout << (1ll) * solve(n) << "\n" ; 
                
                
            }
            return 0 ;
        }