#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    string a , ans = "" ;
    
    cin >> a ; 
    
    stack < int > s ; 
    
    for(int i = 0 ; i < a.length() ; ++i) {
        
        if(isalpha(a[i])) ans += a[i] ;
        
        if(a[i] == '(' or a[i] == '+' or a[i] == '-' or a[i] == '*' or a[i] == '/' or a[i] == '^') 
        s.push(a[i]) ;
        
        else if(a[i] == ')') {
            while(s.top() != '(') {
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
    
    while(testcases--) {
        solve() ;
    }
    return 0 ; 
}