#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    string a , b ; 
    
    cin >> a >> b ;
    
    int j = 0 , cnt = 0 , cnt1 = 0 , k = 0 ;
    
    for(int i = 0 ; i < a.length() ; ++i) {
        
        while( j < b.length() and a[i] != b[j]) j++ ;
        
        if(a[i] == b[j]) {
            cnt++ ; 
            j++;
        }
        else
        break;
    }
    
    for(int i = 0 ; i < b.length() ; ++i) {
        
        while(k < a.length() and b[i] != a[k]) k++ ;
    
        if(b[i] == a[k]) {
            cnt1++ ; 
            k++ ;
        }
        else
        break;
    }
    
    if(cnt == a.length() or cnt1 == b.length()) cout <<"YES\n" ;
    else cout << "NO\n" ; 
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