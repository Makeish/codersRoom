#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    string a ; 
    
    cin >> a ;
    
    map < char , int > mp ;
    
    int m = (a[0] - 'a' + 1) * 100 ; 
    
    for(int i = 97 ; i <= 122 ; ++i) {
        
        char x = i;
        
        mp.insert({x , m}) ;
        
        m++ ; 
    }
    
    long long int sum = 0 ;
    
    for(int i = 0 ; i < a.length() ; ++i) {
        
        sum = fmod(sum + mp[a[i]] , 1e9+7) ; 
    }
    
    cout << sum << "\n" ; 
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