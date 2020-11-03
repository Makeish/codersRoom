#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n , k , input , flag = 0 ;
    
    cin >> n >> k ;
    
    int a[n + 1] = {} ;
    
    while(k--) {
        
        cin >> input ;
        
        a[input] = 1 ;
        
    }
    
    vector < int > ans1 , ans2 ;
    
    for(int i = 1 ; i <= n ; ++i) {
        
        if(a[i] == 0) {
            
            if(flag == 0) {
                ans1.push_back(i) ;
                flag = 1 ;
            }
            else {
                ans2.push_back(i) ;
                flag = 0 ;
            }
        }
    }
    
    if(ans1.size() == 0) cout << "\n" ;
    
    for(auto x:ans1) cout << x << " " ; 
    
    cout << "\n" ; 
    
    if(ans2.size() == 0) cout << "\n" ;
    
    for(auto x:ans2) cout << x << " " ; 
    
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