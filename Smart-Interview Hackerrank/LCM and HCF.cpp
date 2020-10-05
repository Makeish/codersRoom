#include <bits/stdc++.h>

using namespace std ;

int gcd(int a , int b)
{
    if(b == 0)
        return a ;
    return gcd(b , a % b) ; 
}

void solve()
{
    int a , b ; 
    
    cin >> a >> b ;
    
    int HCF = gcd(a , b) ;
    
    cout << (1ll * a * b) / HCF<< " " << HCF << "\n" ; 
    
}
int main()
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        solve() ;
    }
    return 0 ;
}