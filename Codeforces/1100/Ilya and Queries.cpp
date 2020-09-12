#include <bits/stdc++.h>
#define ll long long

using namespace std ;

/* Hint 1 : Can we do something by maintaining count of same adjacent elements */
/* Hint 2 : Use prefix sum concept */

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    
    string a ;
    
    cin >> a ;
    
    int pre[100001] = {} ;
    
    for(int i = 1 ; a[i] != '\0' ; ++i) {
        if(a[i] == a[i-1]){
            pre[i] = pre[i-1] + 1 ;
        }
        else{
            pre[i] = pre[i-1] ;
        }
    }
    
    int m ; 
    
    cin >> m ;
    
    while(m--) {
        
        int p , q ;
        cin >> p >> q ;
        cout << pre[q-1] - pre[p-1] << "\n" ;
    }
    return 0;
}