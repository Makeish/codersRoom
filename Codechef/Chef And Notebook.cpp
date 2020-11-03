#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

string solve()
{
    int x , y , k , n ; 
    
    cin >> x >> y >> k >> n ; 
    
    int a[n] , b[n] , ans = x - y , flag = 0 ;
    
    for(int i = 0 ; i < n ; ++i) {
        
        cin >> a[i] >> b[i] ;
        
        if(a[i] >= ans and b[i] <= k) {
            flag = 1 ;
        }
    }
    
    if(flag) return "LuckyChef\n" ; 
    return "UnluckyChef\n" ; 
    
    
}

int main()
{
    FastIO
    
    int testcases = 1;
    
    cin >> testcases ;
    
    while(testcases--) {
        cout << solve() ;
    }
    return 0 ; 
}