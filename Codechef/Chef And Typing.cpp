#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n ;
    
    int final_ans = 0 ; 
    
    cin >> n ; 
    
    map < string , int > mp ;
    
    while(n--) {
        
        string a ;
        
        cin >> a ; 
        
        int ans = 0 ;
        
        for(int i = 0 ; i < a.length() ; ++i) {
    
            if(i == 0) {
                ans += 2 ;
            }
            else {
                if((a[i] == 'd' and a[i - 1] == 'f') or (a[i] == 'f' and a[i - 1] == 'd') or(a[i] == a[i - 1])) {
                    ans += 4 ;
                }
                else if((a[i] == 'j' and a[i - 1] == 'k') or (a[i] == 'k' and a[i - 1] == 'j') or (a[i] == a[i - 1])) {
                    ans += 4 ;
                }
                else {
                    ans += 2 ;
                }
            }
        }
        
        if(mp[a])
        final_ans += mp[a]/2 ;
        else
        {
            final_ans += ans ;
            mp[a] = ans ;
        }
    }
    cout << final_ans << "\n" ; 
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