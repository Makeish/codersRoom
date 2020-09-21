#include <bits/stdc++.h>

using namespace std ;

string solve(int a , int b , int n)
{
    for(int i = 1 ; i <= n ; ++i) {
        
        if((a*i) == n) {
            return "Yes" ;
        }
        for(int j = 1 ; j <= n ; ++j) {
            if(((a*i) + (b*j)) == n) {
                return "Yes" ;
            }
            else if((b*j) ==n) {
                return "Yes" ;
            }
        }
    }
    return "No" ; 
}
int main()
{
    int a , b , c ; 
    
    cin >> a >> b >> c ; 
    
    cout << solve(a , b , c) ;

    return 0 ;
}