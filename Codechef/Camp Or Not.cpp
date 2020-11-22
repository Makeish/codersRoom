#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n , q , input1 , input2 ; 
    
    cin >> n ; 
    
    int pre[32] = {} ;
    
    for(int i = 0 ; i < n ; ++i) {
        
        cin >> input1 >> input2 ;
        
        pre[input1] = input2 ; 
    }
    
    for(int i = 1 ; i < 32 ; ++i) {
        pre[i] += pre[i - 1] ; 
    }
    
    cin >> q ; 

    while(q--) {
        
        cin >> input1 >> input2 ;
        
        if(pre[input1] >= input2) {
            cout << "Go Camp\n" ;
        }
        else {
            cout << "Go Sleep\n" ; 
        }
    }
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