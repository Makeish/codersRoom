#include <bits/stdc++.h>

using namespace std ;

void solve()
{
    int rows ;
    
    cin >> rows ;
    
    for(int i = 1 ; i <= rows ; ++i) {
        for(int j = 1 ; j <= rows -i ; ++j) {
            cout << " " ;
        }
        for(int j = rows ; j > rows - i ; --j) {
            cout << "*" ; 
        }
        cout << "\n" ; 
    }
}

int main()
{
    ios_base :: sync_with_stdio(false) ;
    
    cin.tie(NULL) ;
    
    cout.tie(NULL) ;
    
    int testcases , i = 1;
    
    cin >> testcases ;
    
    while(i <= testcases) {
        
        cout << "Case #" << i << ": \n" ;
        solve() ;
        i++ ;
    }
    return 0 ;
}