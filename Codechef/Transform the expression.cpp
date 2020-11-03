#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    string a , ans = ""; 
    
    getline(cin , a) ;
    
    stack <char> s ;
    
    for(int i = 0 ; i < a.length() ; ++i) {
        
        if(isalpha(a[i])) {
            ans += a[i] ; 
        }
        else {
            s.push(a[i]) ;
        }
        
        if(s.top() == ')') {
            s.pop() ; 
            while(!s.empty() and s.top() != '(') {
                ans += s.top() ;
                s.pop() ;
            }
            s.pop() ; 
        }
    }
    
    cout << ans << "\n" ; 
}

int main()
{
    FastIO
    
    int testcases = 1;
    
    cin >> testcases ;
    
    cin.ignore() ; 
    
    while(testcases--) {
        solve() ;
    }
    return 0 ; 
}