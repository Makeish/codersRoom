#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
   int n ; 
   
   cin >> n ;
   
   int a[n + 1] , output[n + 1] ;
   
   for(int i = 1 ; i <= n ; ++i) cin >> a[i] ;
   
   for(int i = 1 ; i <= n ; ++i) {
       
       if(a[i] <= n) {
           output[i] = a[i] + a[a[i]] ; 
       }
       else {
           int k = a[i] ;
           while(k >= n) {
               k /= 2 ; 
           }
           output[i] = a[n -k]; 
       }
   }
   
   for(int i = 1 ; i <= n ; ++i) cout << output[i] << " " ;
   
   cout << "\n" ; 
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