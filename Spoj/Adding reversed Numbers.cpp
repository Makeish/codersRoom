    #include <bits/stdc++.h>
    #define ll long long
    #define MOD 1e9+7
    #define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
     
    using namespace std ;
     
    int reverse(int n)
    {
        int sum = 0 ;
        
        while(n != 0) {
            sum = sum * 10 + (n % 10) ;
            n /= 10 ;
        }
        
        return sum ;
    }
     
    void solve()
    {
        int m , n ; 
        
        cin >> m >> n ; 
        
        cout << reverse(reverse(m) + reverse(n)) << "\n" ; 
    }
     
    int main()
    {
        FastIO
        
        int testcases = 1;
        
        cin >> testcases ;
        
        while(testcases--) {
            solve() ;
        }
        return 0 ; 
    } 