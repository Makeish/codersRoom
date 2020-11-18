#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
   int n , k , cnt = 0 ; 
   
   cin >> n >> k ;
   
   int a[n] , flag[n] = {} ;
   
   for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
   
   sort(a , a + n) ; 
   
   for(int i = 0 ; i < n ; ++i) {
       
       int posi = lower_bound(a + i + 1 , a + n , k - a[i]) - a ;
       
       if((a[posi] == k - a[i]) and flag[posi] == 0) {
           cnt++ ;
           flag[i] = 1 ; 
       } 
   }
   
   cout << cnt << "\n" ; 
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